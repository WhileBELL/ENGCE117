#include <stdio.h>
#include <string.h>

struct customer{
    char name[20];
    int age;
    char sex;
}
typedef ctms;

int main(){
    ctms chomchai;
    printf("input name, age, sex : ");
    scanf(" %s %d %c", chomchai.name, &chomchai.age, &chomchai.sex );
    printf("%s %d %c", chomchai.name, chomchai.age, chomchai.sex );
    return 0;
}
