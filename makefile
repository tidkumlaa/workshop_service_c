APP=app_11
OBJS_DIR=objs
SCHEMA_DIR=../schema
COMMON_DIR=../common
XS_DIR=xs
LIB_DIR=../..
TOOL_DIR=../..

all: $(OBJS_DIR) $(APP).dll

HMAC_DIR=$(LIB_DIR)/hmac
HMAC_CCFLAG=-I$(HMAC_DIR)
HMAC_LIB=$(HMAC_DIR)/hmac.a

SASF_DIR=$(LIB_DIR)/sasf
SASF_CCFLAG=-I$(SASF_DIR) $(HMAC_CCFLAG)
SASF_LIB=$(SASF_DIR)/sasf.a $(HMAC_LIB)


MLOG_DIR=$(LIB_DIR)/mlog
MLOG_CCFLAG=-I$(MLOG_DIR)
MLOG_LIB=$(MLOG_DIR)/mlog.a


MSLIB_DIR=$(LIB_DIR)/minslib
MSLIB_CCFLAG=-I$(MSLIB_DIR)
MSLIB_LIB=$(MSLIB_DIR)/minslib.a


L4C_DIR=$(LIB_DIR)/l4c
L4C_CCFLAG=-I$(L4C_DIR)
L4C_LIB=$(L4C_DIR)/l4c.a


NODES_DIR=$(LIB_DIR)/nodes
NODES_CCFLAG=-I$(NODES_DIR)
NODES_LIB=$(NODES_DIR)/nodes.a


SHASH_DIR=$(LIB_DIR)/shash
SHASH_CCFLAG=-I$(SHASH_DIR)

XIS_DIR=$(LIB_DIR)/xis
XIS_CCFLAG=-I$(XIS_DIR)
XIS_LIB=$(XIS_DIR)/xis.a


XMLP_DIR=$(LIB_DIR)/xmlp
XMLP_CCFLAG=-I$(XMLP_DIR)
XMLP_LIB=$(XMLP_DIR)/xmlp.a


XSD_DIR=$(LIB_DIR)/xsd
XSD_CCFLAG=-I$(XSD_DIR)
XSD_LIB=$(XSD_DIR)/xsd.a


BN_DIR=$(LIB_DIR)/openssl/openssl-1.0.2o
BN_CCFLAG=-DLIB_BN_OPENSSL -I$(BN_DIR) -I$(BN_DIR)/include
BN_LIB=$(BN_DIR)/libcrypto.a


SAS5_DIR=$(LIB_DIR)/sas5
SAS5_CCFLAG=-I$(SAS5_DIR)
SAS5_DLLLIB=$(SAS5_DIR)/sass_dl.a
SAS5_EXELIB=$(SAS5_DIR)/sass_exe.a
SAS5_CLIB=$(SAS5_DIR)/sasc.a


#####################################################################
# ORACLE
include $(ORACLE_HOME)/rdbms/lib/env_rdbms.mk
ORADB4_DIR=$(LIB_DIR)/oradb4
######################################################################
# oracle 9
DB_CCFLAG=-DFAS_DB_ORADB4 -DDB_ORACLE -DDB_OCI_7 -DDB_OCI_9 $(INCLUDE) -I$(ORADB4_DIR)
DB_LDFLAG=$(LDFLAGS)
# static libraries
DB_LIB=$(ORADB4_DIR)/oradb4.a $(STATIC_LDCLIENTLIBS) $(ORACLETTLIBS)
# dynamic libraries
#DB_LIB=$(ORADB4_DIR)/oradb4.a $(SHARED_LDCLIENTLIBS)


FAS2_DIR=$(LIB_DIR)/fas2
FAS2_CCFLAG=-DFAS_DB_ORADB4 -I$(FAS2_DIR)
FAS2_LIB=$(FAS2_DIR)/fas2ora.a






######################################################################
# PLATEFORM
######################################################################
# LINUX-64
PF_CC=gcc
PF_CCFLAG=-DOS_LINUX -DCPU_X86_64 -m64 -fPIC -O -Wall
PF_DLLFLAG=-m64 -Wl,-rpath=$(LD_LIBRARY_PATH) -shared
PF_EXEFLAG=-m64	-Wl,-rpath=$(LD_LIBRARY_PATH)
PF_LIB=-lz




######################################################################
# PROJECT
PROJ_CC=$(PF_CC)
PROJ_LD=$(DB_LDFLAG) $(PF_CC)
PROJ_CCFLAG=-I. $(BN_CCFLAG) $(FAS2_CCFLAG) $(DB_CCFLAG) $(SHASH_CCFLAG) $(NODES_CCFLAG) \
            $(XIS_CCFLAG) $(XMLP_CCFLAG) $(XSD_CCFLAG) $(MSLIB_CCFLAG) $(MLOG_CCFLAG) $(L4C_CCFLAG) \
            $(SAS5_CCFLAG) $(SASF_CCFLAG) -I./xs -I../common $(PF_CCFLAG)
PROJ_DLLFLAG=$(DB_LDFLAG) $(PF_DLLFLAG)
PROJ_EXEFLAG=$(DB_LDFLAG) $(PF_EXEFLAG)
PROJ_DLLLIB=$(XIS_LIB) $(XSD_LIB) $(XMLP_LIB) $(NODES_LIB) $(MLOG_LIB) \
            $(FAS2_LIB) $(L4C_LIB) $(MSLIB_LIB) $(BN_LIB) $(SAS5_DLLLIB) $(SASF_LIB) $(DB_LIB) $(PF_LIB)








DEPS = $(SASF_DIR)/sasf.h ../common/startup_cleanup.c xs/*.h
SERVICES = $(sort $(basename $(wildcard svc_*.c)))
OBJS = $(foreach name,$(sort $(basename $(wildcard svc_*.c))),$(OBJS_DIR)/$(name).o)
LPAREN:=(
RPAREN:=)
LIST = $(foreach name,$(SERVICES),$(name:svc_%=%))
CHECK = $(foreach line,$(shell cat all_services.h 2>/dev/null),$(line:_SERVICE_NAME$(LPAREN)%$(RPAREN)=%))

verify: force
	@if [ "$(strip ${LIST})" != "$(strip ${CHECK})" ]; then \
		echo "Service count mismatch"; \
		exit; \
	fi

$(OBJS_DIR):
	@if [ ! -e $(OBJS_DIR) ]; then \
		mkdir $(OBJS_DIR); \
	fi

all_services.h services: $(SCHEMA_DIR)/$(APP)/version.properties $(SCHEMA_DIR)/$(APP)/*.xsd $(SCHEMA_DIR)/$(APP)/*/*.xsd \
                $(SCHEMA_DIR)/BaseType/*.xsd $(SCHEMA_DIR)/*.xsd template/template.c template/template.h
	if [ ! -e $(XS_DIR) ]; then mkdir $(XS_DIR); fi
	$(TOOL_DIR)/xsdc/xsdc $(SCHEMA_DIR)/$(APP)/Service.xsd \
	-ver_prop $(SCHEMA_DIR)/$(APP)/version.properties \
	-all xs \
	-svc services \
	-svc all_services.h \
	-p=_SERVICE_NAME\( -s=\)
	$(TOOL_DIR)/gsvc/gsvc template/template . services

depend: all_services.h services

$(OBJS_DIR)/%.o: %.c %.h
	$(PROJ_CC) $(PROJ_CCFLAG) -c -o $@ $<

$(OBJS_DIR)/app.o: app.c app.h $(COMMON_DIR)/project.h $(COMMON_DIR)/startup_cleanup.c all_services.h
	$(PROJ_CC) $(PROJ_CCFLAG) -c app.c -o $@

$(APP).dll: all_services.h services $(OBJS_DIR)/app.o $(OBJS)
	$(PROJ_CC) -o $@ $(OBJS_DIR)/app.o $(OBJS) $(PROJ_DLLFLAG) $(PROJ_DLLLIB)
	strip $@

clean: force
	rm -rf $(OBJS_DIR)/*.o $(APP).dll all_services.h $(OBJS_DIR) $(XS_DIR)

force:
