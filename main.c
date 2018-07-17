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

    printf("added block: %s", &hash);

    return 0;
}