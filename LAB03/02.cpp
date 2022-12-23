#include <stdio.h>
#include <string.h>

struct customer{
    char name[20];
    int age;
    char sex;
}
typedef ctms;

void inputctmsdata(ctms *customer){
    for (int i = 0 ; i < 3 ; i++){
        printf("input name, age, sex : ");
        scanf(" %s %d %c", customer[i].name, &customer[i].age, &customer[i].sex );
    }
}

int main(){
    ctms *customer;
    customer = new ctms [3];
    inputctmsdata(customer);
    for (int i = 0 ; i < 3 ; i++){
        printf(" %s %d %c \n", customer[i].name, customer[i].age, customer[i].sex );
    }   
    return 0;
}