#include<stdio.h>

int main(){
    int radius , h;
    printf("Enter the radius\n");
    scanf("%d", &radius);

        printf("Enter the height\n");
    scanf("%d", &h);
    printf("area of circle of with radius %d and height %d is %f ",radius, h, 3.14*radius*radius*h);
     return 0;
}