#include<stdio.h>

int main(){
    int r,t ;
    float p, i;
    printf("ENTER PRINCIPAL AMOUNT \n");
    scanf("%f",&p);
        printf("ENTER RATE OF INTEREST \n");
    scanf("%d",&r);
        printf("ENTER TIME \n");
    scanf("%d",&t);
    i=(p*r*t)/100 ;
printf("YOUR AMOUNT OF INTEREST IS %f : ",i);
     return 0;
}