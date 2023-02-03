#include "stdio.h"

typedef struct node
{
    int data;
    struct node *back; // to make a double linked list have to declare back
    struct node *next;
} nd;

void Addnode(nd **node, int data);
void Insnode(nd *node, int data, nd **begin);

int main() {
    nd *start = NULL;
    return 0;
}

void Addnode(nd **node, int data) {
    nd *temp = NULL;
    while ( *node != NULL){
        temp = *node;
        node = &(*node)->next;
    }
    *node = new nd;
    (*node)->data = data;
    (*node)->back = temp;
    (*node)->next = NULL;
}
