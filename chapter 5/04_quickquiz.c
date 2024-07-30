// #include <stdio.h>
// #include <math.h>

// int main(){
//     int a = 5;
//     printf("The area of this square is %f\n", pow(a, 2));
//     return 0;
// }


#include <stdio.h>
#include <math.h>

int main() {
    double x = -2.0;
    double y = 3.0;

    printf("sin(%f) = %f\n", x, sin(x));
    printf("cos(%f) = %f\n", x, cos(x));
    printf("tan(%f) = %f\n", x, tan(x));
    printf("exp(%f) = %f\n", x, exp(x));
    printf("log(%f) = %f\n", x, log(x));
    printf("pow(%f, %f) = %f\n", x, y, pow(x, y));
    printf("sqrt(%f) = %f\n", x, sqrt(x));
    printf("fabs(%f) = %f\n", x, fabs(x));

    return 0;
}
