#ifndef _GG_ERROR_H_
#define _GG_ERROR_H_

#ifndef ERROR_SUCCESS
	#define ERROR_SUCCESS  0
#endif

// ERROR CODE
#define ERROR_GGAUTH_FAIL_MEM_ALLOC   1
#define ERROR_GGAUTH_FAIL_LOAD_DLL    2
#define ERROR_GGAUTH_FAIL_GET_PROC    3
#define ERROR_GGAUTH_FAIL_BEFORE_INIT 4

#define ERROR_GGAUTH_INVALID_PARAM              10
#define ERROR_GGAUTH_NO_REPLY                   11
#define ERROR_GGAUTH_INVALID_PROTOCOL_VERSION   12
#define ERROR_GGAUTH_INVALID_REPLY              13

#define ERROR_GGAUTH_INVALID_GAMEMON_VER       101
#define ERROR_GGAUTH_INVALID_GAMEMON_VER_CODE  102

#endif