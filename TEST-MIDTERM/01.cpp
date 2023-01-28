// นาย ธีรภัทร กันทอง 65543206017-7 Section 1
// https://github.com/WhileBELL/ENGCE117/tree/main/TEST-MIDTERM
// https://youtu.be/cyIZeLly3h4
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Node {
  int data;
  struct Node *next;
} nd;

void ShowAll(nd **node);
nd *AddNode(nd **node, int num);
void Update(nd **node, int numcheck, int numchange);

int main() {
  nd *start = NULL;
  AddNode(&start, 10);
  AddNode(&start, 20);
  AddNode(&start, 30);
  AddNode(&start, 40);
  ShowAll(&start);
  Update(&start, 10, 99);
  ShowAll(&start);
  Update(&start, 10, 98);
  ShowAll(&start);
  return 0;
}

void ShowAll(nd **node) {
  nd *current = *node;
  while (current != NULL) {
    printf("%d ", current->data);
    current = current->next;
  }
  printf("\n");
}

nd *AddNode(nd **node, int num) {
  nd *current;
  nd *newnode = new nd;
  newnode->next = NULL;
  newnode->data = num;
  if (*node == NULL) {
    *node = newnode;
  } else {
    current = *node;
    while (current->next != NULL) {
      current = current->next;
    }
    current->next = newnode;
  }
  return newnode;
}

void Update(nd **node, int numcheck, int numchange) {
  nd *checknode = *node;
  int check = 0;
  while (checknode != NULL) {
    if (checknode->data == numcheck)
      check++;
    checknode = checknode->next;
  } if (check == 1) {
    nd *newnode = *node;
    while (newnode->data != numcheck || newnode == NULL)
      newnode = newnode->next;
    if (newnode != NULL)
      newnode->data = numchange;
  }
}
