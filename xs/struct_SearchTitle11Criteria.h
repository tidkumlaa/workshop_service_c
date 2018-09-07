#ifndef __struct_SearchTitle11Criteria_h__
#define __struct_SearchTitle11Criteria_h__ 1

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

#endif /* __struct_SearchTitle11Criteria_h__ */

