
/******************************************************************************************
*   Copyright (C) 2018, Program Thai Co., Ltd.
*   template.h version 2.0
*
*   svc_SearchTitle11.h
*   Generated on 2018-09-07 11:44:59, do not modify.
*
******************************************************************************************/

#ifndef __SVC_SearchTitle11_H__
#define __SVC_SearchTitle11_H__ 1

#include "app.h"
#include "enum_all_struct.h"
#include "struct_SearchTitle11Request.h"
#include "struct_SearchTitle11Response.h"
#include "sasf.h"


extern struct _xsd_element_info_ xsd_element_info_tab[];
extern struct _xsd_struct_info_ xsd_struct_info_tab[];


#define SASF_GET_REQUEST \
   _XIS_GET_STRUCT(_SASF_SASD_IN,_SASF_IN_VAR_NAME,_SASF_REQUEST_TAG,xsd_struct_info_tab,xsd_element_info_tab,XSD_STRUCT_SearchTitle11Request,_SASF_REQUEST_SCHEMA_VERSION,XSD_SCHEMA_VERSION,_sasf_nodes,&req,_sasf_err_str) \
   if (_sasf_err_str[0]) \
   { \
      LOG_FATAL(("_XIS_GET_STRUCT return error [%s]",_sasf_err_str)) \
      SASF_ERROR \
   }

#define SASF_PUT_RESPONSE \
   _XIS_PUT_STRUCT(_SASF_SASD_OUT,_SASF_OUT_VAR_NAME,_SASF_RESPONSE_TAG,xsd_struct_info_tab,xsd_element_info_tab,XSD_STRUCT_SearchTitle11Response,res,_sasf_err_str) \
   if (_sasf_err_str[0]) \
   { \
      LOG_FATAL(("_XIS_PUT_STRUCT return error [%s]",_sasf_err_str)) \
      SASF_ERROR \
   }


#endif /* __SVC_SearchTitle11_H__ */

