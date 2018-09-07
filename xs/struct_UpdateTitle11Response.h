#ifndef __struct_UpdateTitle11Response_h__
#define __struct_UpdateTitle11Response_h__ 1

#include "struct_UpdateTitle11ResponseData.h"

struct UpdateTitle11Response
{
   /* struct ServiceResponseBase */
   /* { */
      char **errorCode;      /* min(0) max(1) */
      char **errorMessage;   /* min(0) max(1) */
   /* }; */
   struct UpdateTitle11ResponseData **data;   /* min(0) max(1) */
};

#endif /* __struct_UpdateTitle11Response_h__ */

