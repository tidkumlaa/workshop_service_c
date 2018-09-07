#ifndef __struct_SearchTitle11Result_h__
#define __struct_SearchTitle11Result_h__ 1

#include "struct_Title.h"

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

#endif /* __struct_SearchTitle11Result_h__ */

