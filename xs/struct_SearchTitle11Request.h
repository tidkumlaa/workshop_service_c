#ifndef __struct_SearchTitle11Request_h__
#define __struct_SearchTitle11Request_h__ 1

#include "struct_SearchTitle11RequestData.h"

struct SearchTitle11Request
{
   /* struct ServiceRequestBase */
   /* { */
      char **sessionId;   /* min(0) max(1) */
   /* }; */
   struct SearchTitle11RequestData **data;   /* min(0) max(1) */
};

#endif /* __struct_SearchTitle11Request_h__ */

