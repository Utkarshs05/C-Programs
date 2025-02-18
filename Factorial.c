//Factorial of a number

#include<stdio.h>

int main()
{
    int i,n;
    unsigned int fact = 1;
    printf("Enter a number: ");
    scanf("%d",&n);

    if(n<0)    
        printf("Error! Factorial of a negative number doesn't exist.");
    else{
        for(i=1; i<=n; ++i)
        {
            fact*=i;
        }
        printf("Factorial of %d = %d",n,fact);
    }
    return 0;
}

