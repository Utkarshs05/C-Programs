//Area and circumference of circle

#include<stdio.h>

int main(){
    int radius;
    float pi=3.14,area,circumference;
    printf("Enter Radius: ");
    scanf("%d",&radius);
    area = pi*radius*radius;
    printf("Area of Circle: %f",area);
    circumference = 2*pi*radius;
    printf("\nCircumference of Circle: %f",circumference);

    return 0;
}