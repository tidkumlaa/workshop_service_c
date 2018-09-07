#ifndef __struct_ServiceResponseBase_h__
#define __struct_ServiceResponseBase_h__ 1

struct ServiceResponseBase
{
   char **errorCode;      /* min(0) max(1) */
   char **errorMessage;   /* min(0) max(1) */
};

#endif /* __struct_ServiceResponseBase_h__ */

