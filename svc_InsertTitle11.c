
/******************************************************************************************
*   Copyright (C) 2018, Program Thai Co., Ltd.
*   template.c version 2.0
*
*   svc_InsertTitle11.c
*   Generated on 2018-09-07 11:44:59.
*
* ** BEGIN HISTORY ** *


* ** END HISTORY ** *
*
******************************************************************************************/

#include "svc_InsertTitle11.h"

static char sasf_service_name[] = "InsertTitle11";

/*****************************************************************************************/
/* ** BEGIN LOCAL FUNCTION(s) ** */


/* ** END LOCAL FUNCTION(s) ** */
/*****************************************************************************************/

int
InsertTitle11 (SASD *sasd_csv, SASD * _SASF_SASD_IN, SASD * _SASF_SASD_OUT)
{
   struct InsertTitle11Request *req;
   struct InsertTitle11Response *res;

   _SASF_BEGIN_SERVICE

/*
   use SASF_PUT_RESPONSE_AND_EXIT to put response and exit service
*/
/************************************************************************************/
/* ** BEGIN SERVICE CODE ** */
 FAS_CURS *curs;
   FAS_VAR  *var;
   FAS_STR  *sql;

   int eof;
   int nul;
   char *p;

   FAS_ALLOC_VAR(var)
   FAS_ALLOC_STRING(sql)

   FAS_BEGIN_TRANS

   FAS_CLEAR_VAR(var)
   FAS_CLEAR_STRING(sql)
   FAS_STRCATF(sql,
      "SELECT TEST_TITLE_SEQ.NEXTVAL as TITLE_ID"
      " FROM DUAL"
   );
LOG_DEBUG(("SQL=[%s]",FAS_STRING(sql)))
   FAS_OPEN_CURSOR(curs,FAS_STRING(sql),var)
   FAS_FETCH_RECORD(curs,eof)
   if (eof)
   {
      FAS_ROLLBACK_TRANS
      APP_ERROR_RETURN("1","Not Found Sequence TEST_TITLE_SEQ")
   }
   else
   {
      struct InsertTitle11ResponseData *data = NULL;
      struct InsertTitle11ResponseData **datas = NULL;
      SASF_NEW(res->data)
      SASF_NEW(data)
      FAS_GET_COLUMN_BY_NAME(curs,"TITLE_ID",p,nul)
      SASF_CLONE_STR(p,data->id)
      SASF_APPEND_STRUCT(datas,data)
     res->data = datas;
   }
   FAS_CLOSE_CURSOR(curs)

   FAS_CLEAR_VAR(var)
   FAS_CLEAR_STRING(sql)
   FAS_STRCATF(sql,
      " INSERT INTO TEST_TITLE (TITLE_ID, TITLE_CODE, TITLE_NAME, CREATE_USER, CREATE_DTM, UPDATE_USER, UPDATE_DTM)"
      " VALUES (:TITLE_ID, :TITLE_CODE, :TITLE_NAME, :CREATE_USER, :CREATE_DTM, :UPDATE_USER, :UPDATE_DTM)"
   );
   FAS_SET_VAR_BY_NAME(var,":TITLE_ID",res->data[0]->id)
   FAS_SET_VAR_BY_NAME(var,":TITLE_CODE",req->data[0]->record->code)
   FAS_SET_VAR_BY_NAME(var,":TITLE_NAME",req->data[0]->record->name)
   FAS_SET_VAR_BY_NAME(var,":CREATE_USER",req->data[0]->record->updateUser)
   FAS_SET_VAR_BY_NAME(var,":CREATE_DTM",req->data[0]->record->updateDtm)
   FAS_SET_VAR_BY_NAME(var,":UPDATE_USER",req->data[0]->record->updateUser)
   FAS_SET_VAR_BY_NAME(var,":UPDATE_DTM",req->data[0]->record->updateDtm)
LOG_DEBUG(("SQL=[%s]",FAS_STRING(sql)))
   FAS_EXECUTE(FAS_STRING(sql),var)


   FAS_COMMIT_TRANS

   SASF_APPEND_STRING(res->errorCode,"0")
   SASF_APPEND_STRING(res->errorMessage,"")

/* ** END SERVICE CODE ** */
/************************************************************************************/

   _SASF_END_SERVICE
}


