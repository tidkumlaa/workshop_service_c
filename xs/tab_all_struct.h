
#ifndef __TAB_tab_all_struct_h__
#define __TAB_tab_all_struct_h__ 1

#include "xsd.h"

#ifndef XSD_SCHEMA_VERSION
#define XSD_SCHEMA_VERSION   "1.0.1"
#endif

#undef _XSD_EXTERN_
#ifdef _XSD_ALLOCATE_
#define _XSD_EXTERN_
#else
#define _XSD_EXTERN_   extern
#endif

_XSD_EXTERN_
struct _xsd_element_info_ xsd_element_info_tab[]
#ifdef _XSD_ALLOCATE_
=
{
   { NULL, -1, -1, -1, NULL, -1, 64 },
   /* (1), struct DeleteTitle11Request */
   { "sessionId", XSD_TYPE_XS_STRING, 0, 1, NULL, -1, ( (char *)&(((struct DeleteTitle11Request *)NULL)-> sessionId) - (char *)((struct DeleteTitle11Request *)NULL) ) },
   { "data", XSD_TYPE_NAME, 0, 1, "DeleteTitle11RequestData", XSD_STRUCT_DeleteTitle11RequestData, ( (char *)&(((struct DeleteTitle11Request *)NULL)-> data) - (char *)((struct DeleteTitle11Request *)NULL) ) },
   /* (3), struct DeleteTitle11RequestData */
   { "id", XSD_TYPE_XS_STRING, 1, -1, NULL, -1, ( (char *)&(((struct DeleteTitle11RequestData *)NULL)-> id) - (char *)((struct DeleteTitle11RequestData *)NULL) ) },
   /* (4), struct DeleteTitle11Response */
   { "errorCode", XSD_TYPE_XS_STRING, 0, 1, NULL, -1, ( (char *)&(((struct DeleteTitle11Response *)NULL)-> errorCode) - (char *)((struct DeleteTitle11Response *)NULL) ) },
   { "errorMessage", XSD_TYPE_XS_STRING, 0, 1, NULL, -1, ( (char *)&(((struct DeleteTitle11Response *)NULL)-> errorMessage) - (char *)((struct DeleteTitle11Response *)NULL) ) },
   { "data", XSD_TYPE_NAME, 0, 1, "DeleteTitle11ResponseData", XSD_STRUCT_DeleteTitle11ResponseData, ( (char *)&(((struct DeleteTitle11Response *)NULL)-> data) - (char *)((struct DeleteTitle11Response *)NULL) ) },
   /* (7), struct DeleteTitle11ResponseData */
   /* (7), struct GetTitle11Request */
   { "sessionId", XSD_TYPE_XS_STRING, 0, 1, NULL, -1, ( (char *)&(((struct GetTitle11Request *)NULL)-> sessionId) - (char *)((struct GetTitle11Request *)NULL) ) },
   { "data", XSD_TYPE_NAME, 0, 1, "GetTitle11RequestData", XSD_STRUCT_GetTitle11RequestData, ( (char *)&(((struct GetTitle11Request *)NULL)-> data) - (char *)((struct GetTitle11Request *)NULL) ) },
   /* (9), struct GetTitle11RequestData */
   { "id", XSD_TYPE_XS_STRING, 1, 1, NULL, -1, ( (char *)&(((struct GetTitle11RequestData *)NULL)-> id) - (char *)((struct GetTitle11RequestData *)NULL) ) },
   /* (10), struct GetTitle11Response */
   { "errorCode", XSD_TYPE_XS_STRING, 0, 1, NULL, -1, ( (char *)&(((struct GetTitle11Response *)NULL)-> errorCode) - (char *)((struct GetTitle11Response *)NULL) ) },
   { "errorMessage", XSD_TYPE_XS_STRING, 0, 1, NULL, -1, ( (char *)&(((struct GetTitle11Response *)NULL)-> errorMessage) - (char *)((struct GetTitle11Response *)NULL) ) },
   { "data", XSD_TYPE_NAME, 0, 1, "GetTitle11ResponseData", XSD_STRUCT_GetTitle11ResponseData, ( (char *)&(((struct GetTitle11Response *)NULL)-> data) - (char *)((struct GetTitle11Response *)NULL) ) },
   /* (13), struct GetTitle11ResponseData */
   { "record", XSD_TYPE_NAME, 1, 1, "Title", XSD_STRUCT_Title, ( (char *)&(((struct GetTitle11ResponseData *)NULL)-> record) - (char *)((struct GetTitle11ResponseData *)NULL) ) },
   /* (14), struct InsertTitle11Request */
   { "sessionId", XSD_TYPE_XS_STRING, 0, 1, NULL, -1, ( (char *)&(((struct InsertTitle11Request *)NULL)-> sessionId) - (char *)((struct InsertTitle11Request *)NULL) ) },
   { "data", XSD_TYPE_NAME, 0, 1, "InsertTitle11RequestData", XSD_STRUCT_InsertTitle11RequestData, ( (char *)&(((struct InsertTitle11Request *)NULL)-> data) - (char *)((struct InsertTitle11Request *)NULL) ) },
   /* (16), struct InsertTitle11RequestData */
   { "record", XSD_TYPE_NAME, 1, 1, "Title", XSD_STRUCT_Title, ( (char *)&(((struct InsertTitle11RequestData *)NULL)-> record) - (char *)((struct InsertTitle11RequestData *)NULL) ) },
   /* (17), struct InsertTitle11Response */
   { "errorCode", XSD_TYPE_XS_STRING, 0, 1, NULL, -1, ( (char *)&(((struct InsertTitle11Response *)NULL)-> errorCode) - (char *)((struct InsertTitle11Response *)NULL) ) },
   { "errorMessage", XSD_TYPE_XS_STRING, 0, 1, NULL, -1, ( (char *)&(((struct InsertTitle11Response *)NULL)-> errorMessage) - (char *)((struct InsertTitle11Response *)NULL) ) },
   { "data", XSD_TYPE_NAME, 0, 1, "InsertTitle11ResponseData", XSD_STRUCT_InsertTitle11ResponseData, ( (char *)&(((struct InsertTitle11Response *)NULL)-> data) - (char *)((struct InsertTitle11Response *)NULL) ) },
   /* (20), struct InsertTitle11ResponseData */
   { "id", XSD_TYPE_XS_STRING, 1, 1, NULL, -1, ( (char *)&(((struct InsertTitle11ResponseData *)NULL)-> id) - (char *)((struct InsertTitle11ResponseData *)NULL) ) },
   /* (21), struct SearchCriteriaBase */
   { "pageNo", XSD_TYPE_XS_INT, 1, 1, NULL, -1, ( (char *)&(((struct SearchCriteriaBase *)NULL)-> pageNo) - (char *)((struct SearchCriteriaBase *)NULL) ) },
   { "recordsPerPage", XSD_TYPE_XS_INT, 1, 1, NULL, -1, ( (char *)&(((struct SearchCriteriaBase *)NULL)-> recordsPerPage) - (char *)((struct SearchCriteriaBase *)NULL) ) },
   /* (23), struct SearchResultBase */
   { "pageNo", XSD_TYPE_XS_INT, 1, 1, NULL, -1, ( (char *)&(((struct SearchResultBase *)NULL)-> pageNo) - (char *)((struct SearchResultBase *)NULL) ) },
   { "recordsPerPage", XSD_TYPE_XS_INT, 1, 1, NULL, -1, ( (char *)&(((struct SearchResultBase *)NULL)-> recordsPerPage) - (char *)((struct SearchResultBase *)NULL) ) },
   { "firstRecord", XSD_TYPE_XS_INT, 1, 1, NULL, -1, ( (char *)&(((struct SearchResultBase *)NULL)-> firstRecord) - (char *)((struct SearchResultBase *)NULL) ) },
   { "totalRecords", XSD_TYPE_XS_INT, 1, 1, NULL, -1, ( (char *)&(((struct SearchResultBase *)NULL)-> totalRecords) - (char *)((struct SearchResultBase *)NULL) ) },
   { "totalPages", XSD_TYPE_XS_INT, 1, 1, NULL, -1, ( (char *)&(((struct SearchResultBase *)NULL)-> totalPages) - (char *)((struct SearchResultBase *)NULL) ) },
   /* (28), struct SearchTitle11Criteria */
   { "pageNo", XSD_TYPE_XS_INT, 1, 1, NULL, -1, ( (char *)&(((struct SearchTitle11Criteria *)NULL)-> pageNo) - (char *)((struct SearchTitle11Criteria *)NULL) ) },
   { "recordsPerPage", XSD_TYPE_XS_INT, 1, 1, NULL, -1, ( (char *)&(((struct SearchTitle11Criteria *)NULL)-> recordsPerPage) - (char *)((struct SearchTitle11Criteria *)NULL) ) },
   { "code", XSD_TYPE_XS_STRING, 0, 1, NULL, -1, ( (char *)&(((struct SearchTitle11Criteria *)NULL)-> code) - (char *)((struct SearchTitle11Criteria *)NULL) ) },
   { "name", XSD_TYPE_XS_STRING, 0, 1, NULL, -1, ( (char *)&(((struct SearchTitle11Criteria *)NULL)-> name) - (char *)((struct SearchTitle11Criteria *)NULL) ) },
   /* (32), struct SearchTitle11Request */
   { "sessionId", XSD_TYPE_XS_STRING, 0, 1, NULL, -1, ( (char *)&(((struct SearchTitle11Request *)NULL)-> sessionId) - (char *)((struct SearchTitle11Request *)NULL) ) },
   { "data", XSD_TYPE_NAME, 0, 1, "SearchTitle11RequestData", XSD_STRUCT_SearchTitle11RequestData, ( (char *)&(((struct SearchTitle11Request *)NULL)-> data) - (char *)((struct SearchTitle11Request *)NULL) ) },
   /* (34), struct SearchTitle11RequestData */
   { "criteria", XSD_TYPE_NAME, 1, 1, "SearchTitle11Criteria", XSD_STRUCT_SearchTitle11Criteria, ( (char *)&(((struct SearchTitle11RequestData *)NULL)-> criteria) - (char *)((struct SearchTitle11RequestData *)NULL) ) },
   /* (35), struct SearchTitle11Response */
   { "errorCode", XSD_TYPE_XS_STRING, 0, 1, NULL, -1, ( (char *)&(((struct SearchTitle11Response *)NULL)-> errorCode) - (char *)((struct SearchTitle11Response *)NULL) ) },
   { "errorMessage", XSD_TYPE_XS_STRING, 0, 1, NULL, -1, ( (char *)&(((struct SearchTitle11Response *)NULL)-> errorMessage) - (char *)((struct SearchTitle11Response *)NULL) ) },
   { "data", XSD_TYPE_NAME, 1, 1, "SearchTitle11ResponseData", XSD_STRUCT_SearchTitle11ResponseData, ( (char *)&(((struct SearchTitle11Response *)NULL)-> data) - (char *)((struct SearchTitle11Response *)NULL) ) },
   /* (38), struct SearchTitle11ResponseData */
   { "searchResult", XSD_TYPE_NAME, 1, 1, "SearchTitle11Result", XSD_STRUCT_SearchTitle11Result, ( (char *)&(((struct SearchTitle11ResponseData *)NULL)-> searchResult) - (char *)((struct SearchTitle11ResponseData *)NULL) ) },
   /* (39), struct SearchTitle11Result */
   { "pageNo", XSD_TYPE_XS_INT, 1, 1, NULL, -1, ( (char *)&(((struct SearchTitle11Result *)NULL)-> pageNo) - (char *)((struct SearchTitle11Result *)NULL) ) },
   { "recordsPerPage", XSD_TYPE_XS_INT, 1, 1, NULL, -1, ( (char *)&(((struct SearchTitle11Result *)NULL)-> recordsPerPage) - (char *)((struct SearchTitle11Result *)NULL) ) },
   { "firstRecord", XSD_TYPE_XS_INT, 1, 1, NULL, -1, ( (char *)&(((struct SearchTitle11Result *)NULL)-> firstRecord) - (char *)((struct SearchTitle11Result *)NULL) ) },
   { "totalRecords", XSD_TYPE_XS_INT, 1, 1, NULL, -1, ( (char *)&(((struct SearchTitle11Result *)NULL)-> totalRecords) - (char *)((struct SearchTitle11Result *)NULL) ) },
   { "totalPages", XSD_TYPE_XS_INT, 1, 1, NULL, -1, ( (char *)&(((struct SearchTitle11Result *)NULL)-> totalPages) - (char *)((struct SearchTitle11Result *)NULL) ) },
   { "list", XSD_TYPE_NAME, 0, 10, "Title", XSD_STRUCT_Title, ( (char *)&(((struct SearchTitle11Result *)NULL)-> list) - (char *)((struct SearchTitle11Result *)NULL) ) },
   /* (45), struct ServiceRequestBase */
   { "sessionId", XSD_TYPE_XS_STRING, 0, 1, NULL, -1, ( (char *)&(((struct ServiceRequestBase *)NULL)-> sessionId) - (char *)((struct ServiceRequestBase *)NULL) ) },
   /* (46), struct ServiceResponseBase */
   { "errorCode", XSD_TYPE_XS_STRING, 0, 1, NULL, -1, ( (char *)&(((struct ServiceResponseBase *)NULL)-> errorCode) - (char *)((struct ServiceResponseBase *)NULL) ) },
   { "errorMessage", XSD_TYPE_XS_STRING, 0, 1, NULL, -1, ( (char *)&(((struct ServiceResponseBase *)NULL)-> errorMessage) - (char *)((struct ServiceResponseBase *)NULL) ) },
   /* (48), struct Test11Request */
   { "sessionId", XSD_TYPE_XS_STRING, 0, 1, NULL, -1, ( (char *)&(((struct Test11Request *)NULL)-> sessionId) - (char *)((struct Test11Request *)NULL) ) },
   /* (49), struct Test11Response */
   { "errorCode", XSD_TYPE_XS_STRING, 0, 1, NULL, -1, ( (char *)&(((struct Test11Response *)NULL)-> errorCode) - (char *)((struct Test11Response *)NULL) ) },
   { "errorMessage", XSD_TYPE_XS_STRING, 0, 1, NULL, -1, ( (char *)&(((struct Test11Response *)NULL)-> errorMessage) - (char *)((struct Test11Response *)NULL) ) },
   /* (51), struct Title */
   { "id", XSD_TYPE_XS_STRING, 0, 1, NULL, -1, ( (char *)&(((struct Title *)NULL)-> id) - (char *)((struct Title *)NULL) ) },
   { "code", XSD_TYPE_XS_STRING, 0, 1, NULL, -1, ( (char *)&(((struct Title *)NULL)-> code) - (char *)((struct Title *)NULL) ) },
   { "name", XSD_TYPE_XS_STRING, 0, 1, NULL, -1, ( (char *)&(((struct Title *)NULL)-> name) - (char *)((struct Title *)NULL) ) },
   { "createUser", XSD_TYPE_XS_STRING, 0, 1, NULL, -1, ( (char *)&(((struct Title *)NULL)-> createUser) - (char *)((struct Title *)NULL) ) },
   { "createDtm", XSD_TYPE_XS_DATE_TIME, 0, 1, NULL, -1, ( (char *)&(((struct Title *)NULL)-> createDtm) - (char *)((struct Title *)NULL) ) },
   { "updateUser", XSD_TYPE_XS_STRING, 0, 1, NULL, -1, ( (char *)&(((struct Title *)NULL)-> updateUser) - (char *)((struct Title *)NULL) ) },
   { "updateDtm", XSD_TYPE_XS_DATE_TIME, 0, 1, NULL, -1, ( (char *)&(((struct Title *)NULL)-> updateDtm) - (char *)((struct Title *)NULL) ) },
   /* (58), struct UpdateTitle11Request */
   { "sessionId", XSD_TYPE_XS_STRING, 0, 1, NULL, -1, ( (char *)&(((struct UpdateTitle11Request *)NULL)-> sessionId) - (char *)((struct UpdateTitle11Request *)NULL) ) },
   { "data", XSD_TYPE_NAME, 0, 1, "UpdateTitle11RequestData", XSD_STRUCT_UpdateTitle11RequestData, ( (char *)&(((struct UpdateTitle11Request *)NULL)-> data) - (char *)((struct UpdateTitle11Request *)NULL) ) },
   /* (60), struct UpdateTitle11RequestData */
   { "record", XSD_TYPE_NAME, 1, 1, "Title", XSD_STRUCT_Title, ( (char *)&(((struct UpdateTitle11RequestData *)NULL)-> record) - (char *)((struct UpdateTitle11RequestData *)NULL) ) },
   /* (61), struct UpdateTitle11Response */
   { "errorCode", XSD_TYPE_XS_STRING, 0, 1, NULL, -1, ( (char *)&(((struct UpdateTitle11Response *)NULL)-> errorCode) - (char *)((struct UpdateTitle11Response *)NULL) ) },
   { "errorMessage", XSD_TYPE_XS_STRING, 0, 1, NULL, -1, ( (char *)&(((struct UpdateTitle11Response *)NULL)-> errorMessage) - (char *)((struct UpdateTitle11Response *)NULL) ) },
   { "data", XSD_TYPE_NAME, 0, 1, "UpdateTitle11ResponseData", XSD_STRUCT_UpdateTitle11ResponseData, ( (char *)&(((struct UpdateTitle11Response *)NULL)-> data) - (char *)((struct UpdateTitle11Response *)NULL) ) },
   /* (64), struct UpdateTitle11ResponseData */
}
#endif /* _XSD_ALLOCATE_ */
;

_XSD_EXTERN_
struct _xsd_struct_info_ xsd_struct_info_tab[]
#ifdef _XSD_ALLOCATE_
=
{
   { NULL, -1, -1, -1, 30 },
   { "DeleteTitle11Request", XSD_STRUCT_DeleteTitle11Request, (int)sizeof(struct DeleteTitle11Request), 2, 1 },
   { "DeleteTitle11RequestData", XSD_STRUCT_DeleteTitle11RequestData, (int)sizeof(struct DeleteTitle11RequestData), 1, 3 },
   { "DeleteTitle11Response", XSD_STRUCT_DeleteTitle11Response, (int)sizeof(struct DeleteTitle11Response), 3, 4 },
   { "DeleteTitle11ResponseData", XSD_STRUCT_DeleteTitle11ResponseData, (int)sizeof(struct DeleteTitle11ResponseData), 0, 7 },
   { "GetTitle11Request", XSD_STRUCT_GetTitle11Request, (int)sizeof(struct GetTitle11Request), 2, 7 },
   { "GetTitle11RequestData", XSD_STRUCT_GetTitle11RequestData, (int)sizeof(struct GetTitle11RequestData), 1, 9 },
   { "GetTitle11Response", XSD_STRUCT_GetTitle11Response, (int)sizeof(struct GetTitle11Response), 3, 10 },
   { "GetTitle11ResponseData", XSD_STRUCT_GetTitle11ResponseData, (int)sizeof(struct GetTitle11ResponseData), 1, 13 },
   { "InsertTitle11Request", XSD_STRUCT_InsertTitle11Request, (int)sizeof(struct InsertTitle11Request), 2, 14 },
   { "InsertTitle11RequestData", XSD_STRUCT_InsertTitle11RequestData, (int)sizeof(struct InsertTitle11RequestData), 1, 16 },
   { "InsertTitle11Response", XSD_STRUCT_InsertTitle11Response, (int)sizeof(struct InsertTitle11Response), 3, 17 },
   { "InsertTitle11ResponseData", XSD_STRUCT_InsertTitle11ResponseData, (int)sizeof(struct InsertTitle11ResponseData), 1, 20 },
   { "SearchCriteriaBase", XSD_STRUCT_SearchCriteriaBase, (int)sizeof(struct SearchCriteriaBase), 2, 21 },
   { "SearchResultBase", XSD_STRUCT_SearchResultBase, (int)sizeof(struct SearchResultBase), 5, 23 },
   { "SearchTitle11Criteria", XSD_STRUCT_SearchTitle11Criteria, (int)sizeof(struct SearchTitle11Criteria), 4, 28 },
   { "SearchTitle11Request", XSD_STRUCT_SearchTitle11Request, (int)sizeof(struct SearchTitle11Request), 2, 32 },
   { "SearchTitle11RequestData", XSD_STRUCT_SearchTitle11RequestData, (int)sizeof(struct SearchTitle11RequestData), 1, 34 },
   { "SearchTitle11Response", XSD_STRUCT_SearchTitle11Response, (int)sizeof(struct SearchTitle11Response), 3, 35 },
   { "SearchTitle11ResponseData", XSD_STRUCT_SearchTitle11ResponseData, (int)sizeof(struct SearchTitle11ResponseData), 1, 38 },
   { "SearchTitle11Result", XSD_STRUCT_SearchTitle11Result, (int)sizeof(struct SearchTitle11Result), 6, 39 },
   { "ServiceRequestBase", XSD_STRUCT_ServiceRequestBase, (int)sizeof(struct ServiceRequestBase), 1, 45 },
   { "ServiceResponseBase", XSD_STRUCT_ServiceResponseBase, (int)sizeof(struct ServiceResponseBase), 2, 46 },
   { "Test11Request", XSD_STRUCT_Test11Request, (int)sizeof(struct Test11Request), 1, 48 },
   { "Test11Response", XSD_STRUCT_Test11Response, (int)sizeof(struct Test11Response), 2, 49 },
   { "Title", XSD_STRUCT_Title, (int)sizeof(struct Title), 7, 51 },
   { "UpdateTitle11Request", XSD_STRUCT_UpdateTitle11Request, (int)sizeof(struct UpdateTitle11Request), 2, 58 },
   { "UpdateTitle11RequestData", XSD_STRUCT_UpdateTitle11RequestData, (int)sizeof(struct UpdateTitle11RequestData), 1, 60 },
   { "UpdateTitle11Response", XSD_STRUCT_UpdateTitle11Response, (int)sizeof(struct UpdateTitle11Response), 3, 61 },
   { "UpdateTitle11ResponseData", XSD_STRUCT_UpdateTitle11ResponseData, (int)sizeof(struct UpdateTitle11ResponseData), 0, 64 }
}
#endif /* _XSD_ALLOCATE_ */
;

#endif /* __TAB_tab_all_struct_h__ */

