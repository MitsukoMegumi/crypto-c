#include <stdio.h>
#include "chain.h"
#include "block.h"

int main() 
{
    node* head = NULL;
    node* tmp = NULL;
    block* genBlock = createBlock();

    head = prepend(genBlock, head);

    char hash = genBlock->hash;
    char timestamp = genBlock->timestamp;

    printf("added block: %s with timestamp %d \n", &hash, timestamp);

    return 0;
}