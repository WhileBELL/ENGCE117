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
void Swap(nd **node, int swap1, int swap2);

int main() {
  nd *start = NULL;
  AddNode(&start, 10);
  AddNode(&start, 20);
  AddNode(&start, 30);
  AddNode(&start, 40);
  ShowAll(&start);
  Swap(&start, 20, 30);
  ShowAll(&start);
  Swap(&start, 40, 10);
  ShowAll(&start);
  return 0;
} // End main()

void ShowAll(nd **node) {
  nd *current = *node;
  while (current != NULL) {
    printf("%d ", current->data);
    current = current->next;
  } // end while
  printf("\n");
} // end function

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

void Swap(nd **node, int swap1, int swap2) {
  nd *checknode = *node;
  int check = 0;
  while (checknode != NULL) {
    if (checknode->data == swap1) {
        check++;
    } else if (checknode->data == swap2) {
        check++;
    }
    checknode = checknode->next;
  }
  if (check == 2) {
      while (*node != NULL) {
          if ((*node)->data == swap1) {
              (*node)->data = swap2;
          } else if ((*node)->data == swap2) {
              (*node)->data = swap1;
          }
          node = &(*node)->next;
      }
  }
}
