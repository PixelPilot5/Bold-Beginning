#include <stdio.h>

int main(){
    int i= 5;
    int* j=&i;
    printf("the address of i is %u\n",&i);
    printf("the value stored in j is %d",*j);
    return 0;
}