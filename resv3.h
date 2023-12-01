#pragma once



#ifdef RESV3_EXPORTS
#define RESV3_API __declspec(dllexport)
#else
#define RESV3_API __declspec(dllimport)
#endif

extern "C" RESV3_API int RSV2IP4(const char* hostname, char* ip4str, size_t ip4str_len);
//resolves internet address to IP4 form, storing in ip4str

extern "C" RESV3_API void returnsc(int code);
//return codes for RSV2IP4
