
#define VERSION   "1.0.1"

struct _gxs_element_ tab_elements[] =
{
   { BEGIN("DeleteTitle11Request") },
      { EXTEND("ServiceRequestBase") },
      { mm(0,1),t_struct("DeleteTitle11RequestData","data") },
   { END },

   { BEGIN("DeleteTitle11RequestData") },
      { mm(1,-1),t_string("id") },
   { END },

   { BEGIN("DeleteTitle11Response") },
      { EXTEND("ServiceResponseBase") },
      { mm(0,1),t_struct("DeleteTitle11ResponseData","data") },
   { END },

   { BEGIN("DeleteTitle11ResponseData") },
   { END },

   { BEGIN("GetTitle11Request") },
      { EXTEND("ServiceRequestBase") },
      { mm(0,1),t_struct("GetTitle11RequestData","data") },
   { END },

   { BEGIN("GetTitle11RequestData") },
      { mm(1,1),t_string("id") },
   { END },

   { BEGIN("GetTitle11Response") },
      { EXTEND("ServiceResponseBase") },
      { mm(0,1),t_struct("GetTitle11ResponseData","data") },
   { END },

   { BEGIN("GetTitle11ResponseData") },
      { mm(1,1),t_struct("Title","record") },
   { END },

   { BEGIN("InsertTitle11Request") },
      { EXTEND("ServiceRequestBase") },
      { mm(0,1),t_struct("InsertTitle11RequestData","data") },
   { END },

   { BEGIN("InsertTitle11RequestData") },
      { mm(1,1),t_struct("Title","record") },
   { END },

   { BEGIN("InsertTitle11Response") },
      { EXTEND("ServiceResponseBase") },
      { mm(0,1),t_struct("InsertTitle11ResponseData","data") },
   { END },

   { BEGIN("InsertTitle11ResponseData") },
      { mm(1,1),t_string("id") },
   { END },

   { BEGIN("SearchCriteriaBase") },
      { mm(1,1),t_int("pageNo") },
      { mm(1,1),t_int("recordsPerPage") },
   { END },

   { BEGIN("SearchResultBase") },
      { mm(1,1),t_int("pageNo") },
      { mm(1,1),t_int("recordsPerPage") },
      { mm(1,1),t_int("firstRecord") },
      { mm(1,1),t_int("totalRecords") },
      { mm(1,1),t_int("totalPages") },
   { END },

   { BEGIN("SearchTitle11Criteria") },
      { EXTEND("SearchCriteriaBase") },
      { mm(0,1),t_string("code") },
      { mm(0,1),t_string("name") },
   { END },

   { BEGIN("SearchTitle11Request") },
      { EXTEND("ServiceRequestBase") },
      { mm(0,1),t_struct("SearchTitle11RequestData","data") },
   { END },

   { BEGIN("SearchTitle11RequestData") },
      { mm(1,1),t_struct("SearchTitle11Criteria","criteria") },
   { END },

   { BEGIN("SearchTitle11Response") },
      { EXTEND("ServiceResponseBase") },
      { mm(1,1),t_struct("SearchTitle11ResponseData","data") },
   { END },

   { BEGIN("SearchTitle11ResponseData") },
      { mm(1,1),t_struct("SearchTitle11Result","searchResult") },
   { END },

   { BEGIN("SearchTitle11Result") },
      { EXTEND("SearchResultBase") },
      { mm(0,10),t_struct("Title","list") },
   { END },

   { BEGIN("ServiceRequestBase") },
      { mm(0,1),t_string("sessionId") },
   { END },

   { BEGIN("ServiceResponseBase") },
      { mm(0,1),t_string("errorCode") },
      { mm(0,1),t_string("errorMessage") },
   { END },

   { BEGIN("Test11Request") },
      { EXTEND("ServiceRequestBase") },
   { END },

   { BEGIN("Test11Response") },
      { EXTEND("ServiceResponseBase") },
   { END },

   { BEGIN("Title") },
      { mm(0,1),t_string("id") },
      { mm(0,1),t_string("code") },
      { mm(0,1),t_string("name") },
      { mm(0,1),t_string("createUser") },
      { mm(0,1),t_dt("createDtm") },
      { mm(0,1),t_string("updateUser") },
      { mm(0,1),t_dt("updateDtm") },
   { END },

   { BEGIN("UpdateTitle11Request") },
      { EXTEND("ServiceRequestBase") },
      { mm(0,1),t_struct("UpdateTitle11RequestData","data") },
   { END },

   { BEGIN("UpdateTitle11RequestData") },
      { mm(1,1),t_struct("Title","record") },
   { END },

   { BEGIN("UpdateTitle11Response") },
      { EXTEND("ServiceResponseBase") },
      { mm(0,1),t_struct("UpdateTitle11ResponseData","data") },
   { END },

   { BEGIN("UpdateTitle11ResponseData") },
   { END },

};

