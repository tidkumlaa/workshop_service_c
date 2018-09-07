#ifndef __struct_Title_h__
#define __struct_Title_h__ 1

struct Title
{
   char **id;                 /* min(0) max(1) */
   char **code;               /* min(0) max(1) */
   char **name;               /* min(0) max(1) */
   char **createUser;         /* min(0) max(1) */
   xsd_datetime *createDtm;   /* min(0) max(1) */
   char **updateUser;         /* min(0) max(1) */
   xsd_datetime *updateDtm;   /* min(0) max(1) */
};

#endif /* __struct_Title_h__ */

