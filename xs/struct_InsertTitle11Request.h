#ifndef __struct_InsertTitle11Request_h__
#define __struct_InsertTitle11Request_h__ 1

#include "struct_InsertTitle11RequestData.h"

struct InsertTitle11Request
{
   /* struct ServiceRequestBase */
   /* { */
      char **sessionId;   /* min(0) max(1) */
   /* }; */
   struct InsertTitle11RequestData **data;   /* min(0) max(1) */
};

#endif /* __struct_InsertTitle11Request_h__ */

