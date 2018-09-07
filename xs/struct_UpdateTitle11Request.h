#ifndef __struct_UpdateTitle11Request_h__
#define __struct_UpdateTitle11Request_h__ 1

#include "struct_UpdateTitle11RequestData.h"

struct UpdateTitle11Request
{
   /* struct ServiceRequestBase */
   /* { */
      char **sessionId;   /* min(0) max(1) */
   /* }; */
   struct UpdateTitle11RequestData **data;   /* min(0) max(1) */
};

#endif /* __struct_UpdateTitle11Request_h__ */

