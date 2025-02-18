#include <stdio.h>

int main() 
{
    float P,R,T;
    printf("Enter Principal: ");
    scanf("%f",&P);
    printf("Enter Rate: ");
    scanf("%f",&R);
    printf("Enter Time: ");
    scanf("%f",&T);
    float SI=(P*T*R)/100;
    printf("Simple Interest = %f\n",SI);

    return 0;
}