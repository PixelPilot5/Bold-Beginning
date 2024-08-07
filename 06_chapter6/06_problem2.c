#include <stdio.h>
int function(int* x){
   printf("the address of ptr is %u\n",x);
    printf("the value stored in ptr is %d\n",*x);
    return 5;


}

int main(){
    int i= 5;
    int* j=&i;
    printf("the address of i is %u\n",&i);
    printf("the value stored in j is %d\n",*j);
        printf("the address of j is %u\n",j);
    function(j);
    return 0;
}