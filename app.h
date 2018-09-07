
/*
   Copyright (C) 2018, Program Thai Co., Ltd.

   app.h

   Revision history

   1.0.0   Initialize.

*/

#ifndef __APP_H__
#define __APP_H__ 1



/* SASF first */

#undef SASF_BEGIN_FUNCTION
#define SASF_BEGIN_FUNCTION       FAS_BEGIN

#undef SASF_END_FUNCTION
#define SASF_END_FUNCTION         FAS_END

#undef SASF_END_FUNCTION_ERROR
#define SASF_END_FUNCTION_ERROR   FAS_CANCEL

#include "sasf.h"




/* Then other headers */
#include "fas2.h"
#include "project.h"


#ifdef APP_ALLOCATE
#define APP_EXTERN
#else
#define APP_EXTERN   extern
#endif

/* global vars */

//APP_EXTERN int app_global_vars;

APP_EXTERN FAS_DB_STRUCT          fas_db;

#undef FAS_DB
#define FAS_DB                    (&fas_db)


#define APP_STARTUP                                                                      \
{                                                                                        \
   printf ("%s version %s started\n", APP_NAME, APP_VERSION);                            \
   fflush (stdout);                                                                      \
   /* init database here, return -1; if error */                                         \
   char server[256];                                                                     \
   char user[256];                                                                       \
   char pass[256];                                                                       \
   if (mINIRead ("DB", "Server", server) != 0)                                           \
      return -1;                                                                         \
   if (mINIRead ("DB", "User", user) != 0)                                               \
   {                                                                                     \
      CLEAR_ARRAY(server)                                                                \
      return -1;                                                                         \
   }                                                                                     \
   if (mINIRead ("DB", "Password", pass) != 0)                                           \
   {                                                                                     \
      CLEAR_ARRAY(server)                                                                \
      CLEAR_ARRAY(user)                                                                  \
      return -1;                                                                         \
   }                                                                                     \
   if (FAS_DB_CONNECT(FAS_DB,server,user,pass) != 0)                                     \
   {                                                                                     \
      LOG_FATAL(("FAS_DB_CONNECT return error [%s]",FAS_DB_GET_LAST_ERROR(FAS_DB)))      \
      CLEAR_ARRAY(server)                                                                \
      CLEAR_ARRAY(user)                                                                  \
      CLEAR_ARRAY(pass)                                                                  \
      return -1;                                                                         \
   }                                                                                     \
   CLEAR_ARRAY(server)                                                                   \
   CLEAR_ARRAY(user)                                                                     \
   CLEAR_ARRAY(pass)                                                                     \
}


#define APP_CLEANUP                                                                      \
{                                                                                        \
   /* cleanup databse here, set ret = -1; if error */                                    \
   if (FAS_DB_DISCONNECT(FAS_DB) != 0)                                                   \
   {                                                                                     \
      LOG_ERROR(("FAS_DB_DISCONNECT return error [%s]",FAS_DB_GET_LAST_ERROR(FAS_DB)))   \
      ret = -1;                                                                          \
   }                                                                                     \
   printf ("%s version %s stop\n", APP_NAME, APP_VERSION);                               \
   fflush (stdout);                                                                      \
}

/* Application define return code */
/* TODO : Move it to the right place */
#ifndef APP_RET_CODE_INVALID_NOT_NULL
#define APP_RET_CODE_INVALID_NOT_NULL  "W0001"
#endif

#ifndef APP_RET_CODE_INVALID_FORMAT
#define APP_RET_CODE_INVALID_FORMAT    "W0002"
#endif

#ifndef APP_RET_CODE_INVALID_TOO_LONG
#define APP_RET_CODE_INVALID_TOO_LONG  "W0003"
#endif

/* TODO : Application level error handler implementation */
#undef APP_ERROR_RETURN
#ifndef APP_ERROR_RETURN
#define APP_ERROR_RETURN(error_code_,error_msg_)                                         \
{                                                                                        \
   SASF_APPEND_STRING(res->errorCode,(error_code_))                                      \
   SASF_APPEND_STRING(res->errorMessage,(error_msg_))                                    \
   SASF_PUT_RESPONSE_AND_EXIT                                                            \
}
#endif


#endif /* __APP_H__ */
