//Percentage of 5 subjects

#include<stdio.h>

int main(){
    float maths3,dsa,os,ppl,deld,percentage;
    printf("Enter Marks of maths3: ");
    scanf("%f",&maths3);
    printf("Enter Marks of dsa: ");
    scanf("%f",&dsa);
    printf("Enter Marks of os: ");
    scanf("%f",&os);
    printf("Enter Marks of ppl: ");
    scanf("%f",&ppl);
    printf("Enter Marks of deld: ");
    scanf("%f",&deld);
    percentage = (maths3+dsa+os+ppl+deld)/5;
    printf("Percentage: %f",percentage);

    return 0;
}