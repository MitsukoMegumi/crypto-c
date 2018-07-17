#include <string.h>
#include <stdlib.h>
#include <time.h>
#include "sha256.h"
#include "block.h"

block* createBlock()
{
    time_t rawtime;
    struct tm * timeinfo;
    time(&rawtime);
    timeinfo = localtime(&rawtime);
    
    char timestamp = *asctime(timeinfo);

    block* cBlock = (block*)malloc(sizeof(block));

    char hash[SHA256_BLOCK_SIZE];

    char buf[SHA256_BLOCK_SIZE];
	SHA256_CTX ctx;
	int idx;
	int pass = 1;

	sha256_init(&ctx);
	sha256_update(&ctx, (const unsigned char*) (size_t)timestamp, strlen((const char*) (size_t)timestamp));
	sha256_final(&ctx, (unsigned char *)buf);
	pass = pass && !memcmp(hash, buf, SHA256_BLOCK_SIZE);

    cBlock->hash[0] = *hash;
    cBlock->timestamp = timestamp;

    return cBlock;
}