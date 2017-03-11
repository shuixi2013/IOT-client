#include <unistd.h>
#include "utils.h"

#ifndef __INCLUDE_FILEX_

// download file from server
// INPUT: srcFilePath dstFilePath remotePort
// OUPUT: NONE
void downLoadFile(char *src,char *dst,uint16_t port);

// upload file to server
// INPUT: srcFilePath dstFilePath localPort
// OUTPUT: NONE
void uploadFile(char *src,char *dst,uint16_t port);


#endif

