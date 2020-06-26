#ifndef NODE_H
#define NODE_H

typedef struct Node_struct
{
    int data;
    struct Node_struct* nodePtr;
} Node;

#endif
