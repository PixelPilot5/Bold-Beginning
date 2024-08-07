#include <stdio.h>
int* sum(int a, int b){
    int sum=a+b;
    printf("the sum is %d\n",sum);
    int* ptr1=&sum;
    return ptr1;
}
float* avg(int a, int b){
    float avg=(a+b)/2.0;
    printf("the average is %f\n",avg);
        float* ptr2=&avg;
    return ptr2;
}
int main(){
    int x=4,y=10;
    int* address_sum;
    address_sum=sum(x,y);
float* address_avg;

address_avg=avg(x,y);    



printf("the address of sum is %u and of average is %u",address_sum,address_avg);


    
    return 0;
}