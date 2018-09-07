#ifndef __struct_SearchResultBase_h__
#define __struct_SearchResultBase_h__ 1

struct SearchResultBase
{
   int pageNo;           /* min(1) max(1) */
   int recordsPerPage;   /* min(1) max(1) */
   int firstRecord;      /* min(1) max(1) */
   int totalRecords;     /* min(1) max(1) */
   int totalPages;       /* min(1) max(1) */
};

#endif /* __struct_SearchResultBase_h__ */

