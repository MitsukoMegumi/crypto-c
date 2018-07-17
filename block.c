#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "block.h"


unsigned long hash(unsigned char str)
{
    unsigned long hash = 5381;
    int c;

    while ((c = str++))
        hash = ((hash << 5) + hash) + c; /* hash * 33 + c */

    return hash;
}

block* createBlock()
{
    time_t rawtime;
    struct tm * timeinfo;
    time(&rawtime);
    timeinfo = localtime(&rawtime);
    
    char timestamp = *asctime(timeinfo);

    block* cBlock = (block*)malloc(512);

    unsigned char uchar = (unsigned char) timestamp;

    cBlock->hash = (char)hash(uchar);
    cBlock->timestamp = timestamp;

    return cBlock;
}