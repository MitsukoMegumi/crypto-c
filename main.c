#include <stdio.h>
#include "chain.h"
#include "block.h"

int main() 
{
    node* head = NULL;
    node* tmp = NULL;
    block* genBlock = createBlock();

    head = prepend(genBlock, head);

    char buffer[32];
    
    strftime(buffer, 32, "_%Y_%m_%d_%H_%M", &genBlock->timestamp);

    printf("added block: %s with timestamp %d \n", &hash, buffer);

    return 0;
}