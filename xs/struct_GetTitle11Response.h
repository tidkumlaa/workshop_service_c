#ifndef __struct_GetTitle11Response_h__
#define __struct_GetTitle11Response_h__ 1

#include "struct_GetTitle11ResponseData.h"

struct GetTitle11Response
{
   /* struct ServiceResponseBase */
   /* { */
      char **errorCode;      /* min(0) max(1) */
      char **errorMessage;   /* min(0) max(1) */
   /* }; */
   struct GetTitle11ResponseData **data;   /* min(0) max(1) */
};

#endif /* __struct_GetTitle11Response_h__ */

