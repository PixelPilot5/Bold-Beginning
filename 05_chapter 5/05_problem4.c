#include <stdio.h>

int fibonacci(int);

int fibonacci(int n){
if(n==0){
    return 0;
}
else if(n==1){
    return 1;
}

return fibonacci(n-1)+fibonacci(n-2);
}

int main(){
    int a;
    printf("Enter your number:");
    scanf("%d",&a);
    printf("The number in the fibonacci series is %d",fibonacci(a));
    
    return 0;
}