#include <stdio.h>

int main(){
    int n,f=1,i=1;
    printf("enter the number whose factorial you want to get :");
    scanf("%d",&n);
while(i<=n){
    
        f*=i;
        /* code */
        i++;}
    
    printf("the factorial of %d is %d ",n,f);
    
    return 0;
}