#include<stdio.h>

int main()
{
    long int gs,bs,da,hr;
    printf("Enter your Basic Salary:\n");
    scanf("%ld",&bs);
    da=(bs*5)/100;
    hr= (bs*10)/100;
    gs = bs + da + hr;
    printf("\nGross Salary is: %ld",gs);

    return 0;
}