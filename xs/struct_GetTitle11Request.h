#ifndef __struct_GetTitle11Request_h__
#define __struct_GetTitle11Request_h__ 1

#include "struct_GetTitle11RequestData.h"

struct GetTitle11Request
{
   /* struct ServiceRequestBase */
   /* { */
      char **sessionId;   /* min(0) max(1) */
   /* }; */
   struct GetTitle11RequestData **data;   /* min(0) max(1) */
};

#endif /* __struct_GetTitle11Request_h__ */

