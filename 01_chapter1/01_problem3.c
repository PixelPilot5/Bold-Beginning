#include<stdio.h>

int main(){
    int c;
    float f;
    printf("ENTER THE TEMP IN CELCIUS\n");
    scanf("%d",&c);
    f=((9.0/5.0)*c)+32 ;
    printf("TEMP IN FAHRENHEIT IS %f",f);
     return 0;
}