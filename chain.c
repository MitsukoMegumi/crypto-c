#include <stdlib.h>
#include <stdio.h>
#include "chain.h"
#include "block.h"

node *create(block* dat, node* next)
{
    node* new_node = (node*)malloc(sizeof(node));
    if(new_node == NULL)
    {
        printf("Error creating a new node.\n");
        exit(0);
    }
    new_node->nodeBlock = *dat;
    new_node->next = next;
 
    return new_node;
}

node *prepend(block* dat, node* head)
{
    node* new_node = create(dat, head);
    head = new_node;
    return head;
}

int count(node *head)
{
    node *cursor = head;
    int c = 0;
    while(cursor != NULL)
    {
        c++;
        cursor = cursor->next;
    }
    return c;
}

node *append(block* dat, node* head)
{
    /* go to the last node */
    node *cursor = head;
    while(cursor->next != NULL)
        cursor = cursor->next;
 
    /* create a new node */
    node* new_node =  create(dat, NULL);
    cursor->next = new_node;
 
    return head;
}