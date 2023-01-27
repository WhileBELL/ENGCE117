#include "stdio.h"
#include "string"
#include <string.h>

struct studentNode {
  char name[20];
  int age;
  char sex;
  float gpa;
  struct studentNode *next;
};

void ShowAll(struct studentNode *walk);
struct studentNode *AddNode(struct studentNode **head, const char *name,
                            int age, char sex, float gpa);

int main() {
  struct studentNode *start, *now;
  start = NULL;
  now = AddNode(&start, "one", 6, 'M', 3.11);ShowAll(&start);
  now = AddNode(&start, "two", 8, 'F', 3.22);ShowAll(&start);
  // InsNode( now, "three", 10, 'M', 3.33 ) ; ShowAll( start ) ;
  // InsNode( now, "four", 12, 'F', 3.44 ) ; ShowAll( start ) ;
  // DelNode( now ) ; ShowAll( start ) ;
  return 0;
}
void showAll(struct studentNode *walk) {
  while (walk != NULL) {
    printf("%s ", walk->name);
    walk = walk->next;
  } // end while
  printf(" ");
} // end function

struct studentNode *AddNode(struct studentNode **head, const char *name,
                            int age, char sex, float gpa) {
  struct studentNode *newnode = NULL;
  newnode = (struct studentNode *)malloc(sizeof(struct studentNode));
  strcpy_s(newnode->name, name);
  newnode->age = age;
  newnode->sex = sex;
  newnode->gpa = gpa;
  newnode->next = NULL;
  while (1) {
    if (head == NULL) {
      (*head)->next = newnode;
    }
    (*head) = (*head)->next;
  }
  return newnode;
}
