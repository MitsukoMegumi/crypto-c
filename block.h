#ifndef BLOCK_H_   /* Include guard */
#define BLOCK_H_

#define MAX_STRING_LEN 80

#include <time.h>

typedef struct block
{
    char hash[MAX_STRING_LEN];
    struct tm timestamp;
} block;

block* createBlock();

unsigned long hash(unsigned char str);

void convertToCharArray(unsigned char*, long long);

#endif // BLOCK_H_