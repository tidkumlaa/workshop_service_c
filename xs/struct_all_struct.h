
#ifndef __STRUCT_struct_all_struct_h__
#define __STRUCT_struct_all_struct_h__ 1

#ifndef XSD_SCHEMA_VERSION
#define XSD_SCHEMA_VERSION   "1.0.1"
#endif

struct DeleteTitle11Request
{
   /* struct ServiceRequestBase */
   /* { */
      char **sessionId;   /* min(0) max(1) */
   /* }; */
   struct DeleteTitle11RequestData **data;   /* min(0) max(1) */
};

struct DeleteTitle11RequestData
{
   char **id;   /* min(1) max(-1) */
};

struct DeleteTitle11Response
{
   /* struct ServiceResponseBase */
   /* { */
      char **errorCode;      /* min(0) max(1) */
      char **errorMessage;   /* min(0) max(1) */
   /* }; */
   struct DeleteTitle11ResponseData **data;   /* min(0) max(1) */
};

struct DeleteTitle11ResponseData
{
};

struct GetTitle11Request
{
   /* struct ServiceRequestBase */
   /* { */
      char **sessionId;   /* min(0) max(1) */
   /* }; */
   struct GetTitle11RequestData **data;   /* min(0) max(1) */
};

struct GetTitle11RequestData
{
   char *id;   /* min(1) max(1) */
};

struct GetTitle11Response
{
   /* struct ServiceResponseBase */
   /* { */
      char **errorCode;      /* min(0) max(1) */
      char **errorMessage;   /* min(0) max(1) */
   /* }; */
   struct GetTitle11ResponseData **data;   /* min(0) max(1) */
};

struct GetTitle11ResponseData
{
   struct Title *record;   /* min(1) max(1) */
};

struct InsertTitle11Request
{
   /* struct ServiceRequestBase */
   /* { */
      char **sessionId;   /* min(0) max(1) */
   /* }; */
   struct InsertTitle11RequestData **data;   /* min(0) max(1) */
};

struct InsertTitle11RequestData
{
   struct Title *record;   /* min(1) max(1) */
};

struct InsertTitle11Response
{
   /* struct ServiceResponseBase */
   /* { */
      char **errorCode;      /* min(0) max(1) */
      char **errorMessage;   /* min(0) max(1) */
   /* }; */
   struct InsertTitle11ResponseData **data;   /* min(0) max(1) */
};

struct InsertTitle11ResponseData
{
   char *id;   /* min(1) max(1) */
};

struct SearchCriteriaBase
{
   int pageNo;           /* min(1) max(1) */
   int recordsPerPage;   /* min(1) max(1) */
};

struct SearchResultBase
{
   int pageNo;           /* min(1) max(1) */
   int recordsPerPage;   /* min(1) max(1) */
   int firstRecord;      /* min(1) max(1) */
   int totalRecords;     /* min(1) max(1) */
   int totalPages;       /* min(1) max(1) */
};

struct SearchTitle11Criteria
{
   /* struct SearchCriteriaBase */
   /* { */
      int pageNo;           /* min(1) max(1) */
      int recordsPerPage;   /* min(1) max(1) */
   /* }; */
   char **code;   /* min(0) max(1) */
   char **name;   /* min(0) max(1) */
};

struct SearchTitle11Request
{
   /* struct ServiceRequestBase */
   /* { */
      char **sessionId;   /* min(0) max(1) */
   /* }; */
   struct SearchTitle11RequestData **data;   /* min(0) max(1) */
};

struct SearchTitle11RequestData
{
   struct SearchTitle11Criteria *criteria;   /* min(1) max(1) */
};

struct SearchTitle11Response
{
   /* struct ServiceResponseBase */
   /* { */
      char **errorCode;      /* min(0) max(1) */
      char **errorMessage;   /* min(0) max(1) */
   /* }; */
   struct SearchTitle11ResponseData *data;   /* min(1) max(1) */
};

struct SearchTitle11ResponseData
{
   struct SearchTitle11Result *searchResult;   /* min(1) max(1) */
};

struct SearchTitle11Result
{
   /* struct SearchResultBase */
   /* { */
      int pageNo;           /* min(1) max(1) */
      int recordsPerPage;   /* min(1) max(1) */
      int firstRecord;      /* min(1) max(1) */
      int totalRecords;     /* min(1) max(1) */
      int totalPages;       /* min(1) max(1) */
   /* }; */
   struct Title **list;   /* min(0) max(10) */
};

struct ServiceRequestBase
{
   char **sessionId;   /* min(0) max(1) */
};

struct ServiceResponseBase
{
   char **errorCode;      /* min(0) max(1) */
   char **errorMessage;   /* min(0) max(1) */
};

struct Test11Request
{
   /* struct ServiceRequestBase */
   /* { */
      char **sessionId;   /* min(0) max(1) */
   /* }; */
};

struct Test11Response
{
   /* struct ServiceResponseBase */
   /* { */
      char **errorCode;      /* min(0) max(1) */
      char **errorMessage;   /* min(0) max(1) */
   /* }; */
};

struct Title
{
   char **id;                 /* min(0) max(1) */
   char **code;               /* min(0) max(1) */
   char **name;               /* min(0) max(1) */
   char **createUser;         /* min(0) max(1) */
   xsd_datetime *createDtm;   /* min(0) max(1) */
   char **updateUser;         /* min(0) max(1) */
   xsd_datetime *updateDtm;   /* min(0) max(1) */
};

struct UpdateTitle11Request
{
   /* struct ServiceRequestBase */
   /* { */
      char **sessionId;   /* min(0) max(1) */
   /* }; */
   struct UpdateTitle11RequestData **data;   /* min(0) max(1) */
};

struct UpdateTitle11RequestData
{
   struct Title *record;   /* min(1) max(1) */
};

struct UpdateTitle11Response
{
   /* struct ServiceResponseBase */
   /* { */
      char **errorCode;      /* min(0) max(1) */
      char **errorMessage;   /* min(0) max(1) */
   /* }; */
   struct UpdateTitle11ResponseData **data;   /* min(0) max(1) */
};

struct UpdateTitle11ResponseData
{
};


#endif /* __STRUCT_struct_all_struct_h__ */

