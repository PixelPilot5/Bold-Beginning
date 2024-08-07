#include <stdio.h>
void change(int* a){
*a=*a*10;

}

int main(){
    int x=15;
       printf("the value of x is %d\n",x);
    change(& x);
    printf("the value of x is %d",x);
    
    return 0;
}