#include <stdio.h>

float temp_convertor(float);

float temp_convertor(float x){
      return x * 9.0 / 5.0 + 32.0;


    
}

int main(){
    float a;

    printf("Enter temp in celcius :");
    scanf("%f",&a);

    printf("The temp is fahrenheit is %.2f",temp_convertor(a));

    
    return 0;
}