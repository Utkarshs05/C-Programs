#include<stdio.h>
int main()
{
    int a;
    printf("Enter your percentage: \n");
    scanf("%d", &a);
    if(a >= 40)
    {
        printf("Congratulations!! You have passed the exam\n");
    }
    else
    {
        printf("You have failed the exam\n");
    }
    return 0;
}