#include <stdio.h>
#include "linkedlist.h"

void Prepend_Node(Node* head, Node* node)
{
    if((*head).nodePtr == NULL)
    {
        (*head).nodePtr = node;
    }
    else
    {
        Node* temp = (*head).nodePtr;
        (*head).nodePtr = node;
        (*node).nodePtr = temp;
    }
}

void Append_Node(Node* head, Node* node)
{
    Node* temp = head;

    while((*temp).nodePtr != NULL)
    {
        temp = (*temp).nodePtr;
    }

    (*temp).nodePtr = node;
}

void Reverse_List(Node* head)
{
    Node* previous = NULL;
    Node* current = head;
    Node* next = NULL;

    while((*current).nodePtr != NULL)
    {
        next = (*current).nodePtr;
        (*current).nodePtr = previous;
        previous = current;
        current = next;

        if((*current).nodePtr == NULL)
        {
            (*current).nodePtr = previous;
            break;
        }
    }
}

void Print_List(Node* head)
{
    Node* currentNode = head;

    while(currentNode != NULL)
    {
        printf("%d\n", (*currentNode).data);
        currentNode = (*currentNode).nodePtr;
    }
}
