//Convert Celsius into Fahrenheit

#include<stdio.h>

int main(){
    float c,f;
    printf("Enter temprature in celsius: ");
    scanf("%f",&c);
    f = (c*(9/5))+32;
    printf("%.2f Celsius = %.2f Fahrenheit",c,f);

    return 0;
}
