//Area of triangle

#include<stdio.h>

int main(){
    int base,height;
    float area;
    printf("Enter base: ");
    scanf("%d",&base);
    printf("Enter height: ");
    scanf("%d",&height);
    area = 0.5*base*height;
    printf("Area of Triangle: %f",area);

    return 0;
}