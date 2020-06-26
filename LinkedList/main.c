#include <stdlib.h>
#include <stdio.h>
#include "linkedlist.h"

int main(void)
{
    Node head;
    head.data = -1;
    head.nodePtr = NULL;

    Node node1;
    node1.data = 1;
    node1.nodePtr = NULL;

    //Prepend_Node(&head, &node1);
    Append_Node(&head, &node1);

    //head.nodePtr = &node1;

    Print_List(&head);

    return 0;
}
