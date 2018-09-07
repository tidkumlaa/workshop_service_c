#ifndef __struct_DeleteTitle11Response_h__
#define __struct_DeleteTitle11Response_h__ 1

#include "struct_DeleteTitle11ResponseData.h"

struct DeleteTitle11Response
{
   /* struct ServiceResponseBase */
   /* { */
      char **errorCode;      /* min(0) max(1) */
      char **errorMessage;   /* min(0) max(1) */
   /* }; */
   struct DeleteTitle11ResponseData **data;   /* min(0) max(1) */
};

#endif /* __struct_DeleteTitle11Response_h__ */

