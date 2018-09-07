
/******************************************************************************************
*   Copyright (C) 2018, Program Thai Co., Ltd.
*   template.h version 2.0
*
*   svc_%s.h
*   Generated on %D %T, do not modify.
*
******************************************************************************************/

#ifndef __SVC_%s_H__
#define __SVC_%s_H__ 1

#include "app.h"
#include "enum_all_struct.h"
#include "struct_%sRequest.h"
#include "struct_%sResponse.h"
#include "sasf.h"


extern struct _xsd_element_info_ xsd_element_info_tab[];
extern struct _xsd_struct_info_ xsd_struct_info_tab[];


#define SASF_GET_REQUEST \
   _XIS_GET_STRUCT(_SASF_SASD_IN,_SASF_IN_VAR_NAME,_SASF_REQUEST_TAG,xsd_struct_info_tab,xsd_element_info_tab,XSD_STRUCT_%sRequest,_SASF_REQUEST_SCHEMA_VERSION,XSD_SCHEMA_VERSION,_sasf_nodes,&req,_sasf_err_str) \
   if (_sasf_err_str[0]) \
   { \
      LOG_FATAL(("_XIS_GET_STRUCT return error [%%s]",_sasf_err_str)) \
      SASF_ERROR \
   }

#define SASF_PUT_RESPONSE \
   _XIS_PUT_STRUCT(_SASF_SASD_OUT,_SASF_OUT_VAR_NAME,_SASF_RESPONSE_TAG,xsd_struct_info_tab,xsd_element_info_tab,XSD_STRUCT_%sResponse,res,_sasf_err_str) \
   if (_sasf_err_str[0]) \
   { \
      LOG_FATAL(("_XIS_PUT_STRUCT return error [%%s]",_sasf_err_str)) \
      SASF_ERROR \
   }


#endif /* __SVC_%s_H__ */

