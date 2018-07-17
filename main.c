#include <stdio.h>
#include "chain.h"
#include "block.h"

int main() 
{
    node* head = NULL;
    node* tmp = NULL;
    block* genBlock = createBlock();

    head = prepend(genBlock, head);

    return 0;
}