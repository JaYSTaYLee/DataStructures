#include <stdlib.h>
#include <stdio.h>
#include "linkedlist.h"

int main(void)
{
    Node node4;
    node4.data = 4;
    node4.nodePtr = NULL;

    Node node3;
    node3.data = 3;
    node3.nodePtr = &node4;

    Node node2;
    node2.data = 2;
    node2.nodePtr = &node3;

    Node node1;
    node1.data = 1;
    node1.nodePtr = &node2;

    //Prepend_Node(&head, &node1);
    //Append_Node(&head, &node1);

    //head.nodePtr = &node1;

    Print_List(&node1);

    Reverse_List(&node1);

    Print_List(&node4);

    return 0;
}
