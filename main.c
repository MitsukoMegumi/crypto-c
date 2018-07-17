#include <stdio.h>
#include "chain.h"
#include "block.h"

int main() 
{
    node* head = NULL;
    block* genBlock = createBlock();

    head = append(genBlock, head);

    return 0;
}