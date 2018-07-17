#include <stdio.h>
#include "chain.c"
#include "block.c"

int main() 
{
    node* head = NULL;
    block* genBlock = createBlock();

    head = append(*genBlock, head);

    return 0;
}