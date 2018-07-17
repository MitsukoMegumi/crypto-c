#ifndef BLOCK_H_   /* Include guard */
#define BLOCK_H_

#define MAX_STRING_LEN 80

typedef struct block
{
    char hash;
    char timestamp;
} block;

block* createBlock();

unsigned long hash(unsigned char str);

#endif // BLOCK_H_