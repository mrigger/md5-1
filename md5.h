#ifndef __MD5_H__
#define __MD5_H__
#include <stdint.h>


#ifdef __cplusplus
extern "C" {
#endif


void md5_signature(unsigned char *key, unsigned long length, unsigned char *result);


uint32_t hash_md5(const char *key, size_t key_length);


#ifdef __cplusplus
}
#endif


#endif	/* __MD5_H__ */
