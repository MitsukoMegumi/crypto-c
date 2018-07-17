#ifndef CHAIN_H_   /* Include guard */
#define CHAIN_H_

#include "block.h"

typedef struct node 
{
    block nodeBlock;
    struct node* next;
} node;

node* create(block*, node*);

node* prepend(block*, node*);

node* append(block*, node*);

int count(node *head);

#endif // CHAIN_H_