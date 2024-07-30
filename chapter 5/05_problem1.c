#include <stdio.h>

float average(int, int, int);

float average(int x,int y , int z){

printf("average is %f",(x+y+z)/3.0);
return 0;

}

int main(){
    int a , b ,c ;
    printf("enter the first number:");
    scanf("%d",&a);

        printf("enter the second number:");
    scanf("%d",&b);

        printf("enter the third number:");
    scanf("%d",&c);


    average(a,b,c);
    
    return 0;
}