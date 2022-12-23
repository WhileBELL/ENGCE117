#include <stdio.h>
#include <string.h>

struct customer{
    char name[20];
    int age;
    float money;
}
typedef ctms;

void inputctmsdata(ctms customer[1]){
    for (int i = 0 ; i < 3 ; i++){
        printf("input name, age, money : ");
        scanf(" %s %d %f", customer[i].name, &customer[i].age, &customer[i].money );
    }
}

struct customer findmaxmon (ctms customer[3]){
    float max = customer[0].money;
    int maxi = 0;
    for(int i = 0; i < 3 ; i++){
        if(customer[i].money > max){
            max = customer[i].money;
            maxi = i;
        }
    }
    return customer[maxi];
}

int main(){
    ctms *customer;
    customer = new ctms [3];
    inputctmsdata(customer);
    for (int i = 0 ; i < 3 ; i++){
        printf(" %s %d %.2f \n", customer[i].name, customer[i].age, customer[i].money );
    }   
    ctms customermaxmon;
    customermaxmon = findmaxmon(customer);
    printf("------------- \n %s %d %.2f ", customermaxmon.name , customermaxmon.age ,customermaxmon.money );
    
    return 0;
}
