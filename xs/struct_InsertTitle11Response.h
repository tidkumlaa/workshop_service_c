#ifndef __struct_InsertTitle11Response_h__
#define __struct_InsertTitle11Response_h__ 1

#include "struct_InsertTitle11ResponseData.h"

struct InsertTitle11Response
{
   /* struct ServiceResponseBase */
   /* { */
      char **errorCode;      /* min(0) max(1) */
      char **errorMessage;   /* min(0) max(1) */
   /* }; */
   struct InsertTitle11ResponseData **data;   /* min(0) max(1) */
};

#endif /* __struct_InsertTitle11Response_h__ */

