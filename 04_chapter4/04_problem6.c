#include <stdio.h>

int main(){
    int n,f=1;
    printf("enter the number whose factorial you want to get :");
    scanf("%d",&n);
    for (int i=1; i<=n; i++)
    {
        f*=i;
        /* code */
    }
    printf("the factorial of %d is %d ",n,f);
    
    return 0;
}