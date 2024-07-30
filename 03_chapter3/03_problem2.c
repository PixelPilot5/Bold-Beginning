#include <stdio.h>

int main()
{
    int sub1, sub2, sub3, total;

    printf("enter your subject 1  marks :");
    scanf("%d", &sub1);
    printf("enter your subject 2  marks :");
    scanf("%d", &sub2);
    printf("enter your subject 3  marks :");
    scanf("%d", &sub3);
    total = ((sub1 + sub2 + sub3) / 3);
    if (total >= 40 && sub1>=33 && sub2>=33 && sub3 >= 33)
    {
        printf("you are pass");
    }
    else
    {
        printf("you are fail");
    }

    return 0;
}