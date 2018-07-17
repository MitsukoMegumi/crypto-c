#ifndef BLOCK_H_   /* Include guard */
#define BLOCK_H_

#define MAX_STRING_LEN 80

typedef struct block
{
    char hash[MAX_STRING_LEN];
    char timestamp;
} block;

block* createBlock();

#endif // CHAIN_H_