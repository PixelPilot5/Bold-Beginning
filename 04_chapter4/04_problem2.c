#include <stdio.h>

int main(){
    int n,i,m ;
    printf("Enter the number:");
    scanf("%d",&n);
    for (i = 10; i; i--)
    {
        m=n*i;
        printf("%d * %d = %d\n",n,i,m);

    }
    
    return 0;
}