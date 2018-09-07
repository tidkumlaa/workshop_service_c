#ifndef __struct_SearchTitle11Response_h__
#define __struct_SearchTitle11Response_h__ 1

#include "struct_SearchTitle11ResponseData.h"

struct SearchTitle11Response
{
   /* struct ServiceResponseBase */
   /* { */
      char **errorCode;      /* min(0) max(1) */
      char **errorMessage;   /* min(0) max(1) */
   /* }; */
   struct SearchTitle11ResponseData *data;   /* min(1) max(1) */
};

#endif /* __struct_SearchTitle11Response_h__ */

