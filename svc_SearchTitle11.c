
/******************************************************************************************
*   Copyright (C) 2018, Program Thai Co., Ltd.
*   template.c version 2.0
*
*   svc_SearchTitle11.c
*   Generated on 2018-09-07 11:44:59.
*
* ** BEGIN HISTORY ** *


* ** END HISTORY ** *
*
******************************************************************************************/

#include "svc_SearchTitle11.h"

static char sasf_service_name[] = "SearchTitle11";

/*****************************************************************************************/
/* ** BEGIN LOCAL FUNCTION(s) ** */


/* ** END LOCAL FUNCTION(s) ** */
/*****************************************************************************************/

int
SearchTitle11 (SASD *sasd_csv, SASD * _SASF_SASD_IN, SASD * _SASF_SASD_OUT)
{
   struct SearchTitle11Request *req;
   struct SearchTitle11Response *res;

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
   struct Title *title = NULL;
   struct Title **titles = NULL;

   SASF_NEW(res->data)
   SASF_NEW(res->data->searchResult)
   SASF_NEW(res->data->searchResult->list)

   FAS_ALLOC_VAR(var)
   FAS_ALLOC_STRING(sql)

   FAS_CLEAR_VAR(var)
   FAS_CLEAR_STRING(sql)

   FAS_STRCATF(sql,
      " SELECT TITLE_ID, TITLE_CODE, TITLE_NAME, UPDATE_USER, UPDATE_DTM"
      " FROM TEST_TITLE"
      " WHERE 1=1"
   );
   if (req->data->searchCriteria != NULL && SASF_SIZE(req->data->searchCriteria) == 1)
   {
      if (req->data->searchCriteria[0]->code != NULL 
          && SASF_SIZE(req->data->searchCriteria[0]->code) == 1 
          && req->data->searchCriteria[0]->code[0] != NULL
          && strlen(req->data->searchCriteria[0]->code[0]) > 0)
      {
         FAS_STRCATF(sql," AND TITLE_CODE = :TITLE_CODE");
         FAS_SET_VAR_BY_NAME(var,":TITLE_CODE", req->data->searchCriteria[0]->code[0])
      }
      if (req->data->searchCriteria[0]->name != NULL 
          && SASF_SIZE(req->data->searchCriteria[0]->name) == 1 
          && req->data->searchCriteria[0]->name[0] != NULL
          && strlen(req->data->searchCriteria[0]->name[0]) > 0)
      {
         FAS_STRCATF(sql," AND TITLE_NAME = :TITLE_NAME");
         FAS_SET_VAR_BY_NAME(var,":TITLE_NAME", req->data->searchCriteria[0]->name[0])
      }
   }
   FAS_STRCATF(sql," ORDER BY TITLE_CODE");

LOG_DEBUG(("SQL=[%s]",FAS_STRING(sql)))
   FAS_OPEN_CURSOR(curs,FAS_STRING(sql),var)
   for (;;)
   {
      FAS_FETCH_RECORD(curs,eof)
      if (eof)
      {
         break;
      }

      SASF_NEW(title)
      FAS_GET_COLUMN_BY_NAME(curs,"TITLE_ID",p,nul)
      if (!nul)
         SASF_CLONE_STR(p,title->id)
       FAS_GET_COLUMN_BY_NAME(curs,"TITLE_CODE",p,nul)
      if (!nul)
         SASF_CLONE_STR(p,title->code)

      FAS_GET_COLUMN_BY_NAME(curs,"TITLE_NAME",p,nul)
      if (!nul)
         SASF_CLONE_STR(p,title->name)
      FAS_GET_COLUMN_BY_NAME(curs,"UPDATE_USER",p,nul)
      if (!nul)
         SASF_CLONE_STR(p,title->updateUser)

      FAS_GET_COLUMN_BY_NAME(curs,"UPDATE_DTM",p,nul)
      if (!nul)
         SASF_CLONE_STR(p,title->updateDtm)
     
      SASF_APPEND_STRUCT(titles,title)
   }
   FAS_CLOSE_CURSOR(curs)

   SASF_APPEND_STRING(res->errorCode,"0")
   SASF_APPEND_STRING(res->errorMessage,"")
   if (countrys != NULL)
   {
     res->data->searchResult->list = titles;
   }

LOG_DEBUG(("SIZE=%d",SASF_SIZE(res->data->searchResult->list)))

/* ** END SERVICE CODE ** */
/************************************************************************************/

   _SASF_END_SERVICE
}


