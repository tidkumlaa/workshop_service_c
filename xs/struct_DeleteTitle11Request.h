#ifndef __struct_DeleteTitle11Request_h__
#define __struct_DeleteTitle11Request_h__ 1

#include "struct_DeleteTitle11RequestData.h"

struct DeleteTitle11Request
{
   /* struct ServiceRequestBase */
   /* { */
      char **sessionId;   /* min(0) max(1) */
   /* }; */
   struct DeleteTitle11RequestData **data;   /* min(0) max(1) */
};

#endif /* __struct_DeleteTitle11Request_h__ */

