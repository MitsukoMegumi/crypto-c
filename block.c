#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "block.h"


void convertToCharArray(unsigned char *arr, long long a)
{
    int i = 0;

    for (i = 0; i < 8; ++i)
    {
        arr[i] = (unsigned char)((((unsigned long long) a) >> (56 - (8*i))) & 0xFFu);
    }
}

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

    block* cBlock = (block*)malloc(512);

    char buffer [32];

    strftime(buffer,32,"_%Y_%m_%d_%H_%M",timeinfo);

    cBlock->timestamp = *buffer;

    char hashBuffer [80];

    sprintf(hashBuffer, "%d", hash(buffer));
    puts(hashBuffer);
    strncpy(cBlock->hash, hashBuffer, 80);

    return cBlock;
}