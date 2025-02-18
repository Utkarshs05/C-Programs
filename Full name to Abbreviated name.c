//Convert full name to abbreviated name

#include<stdio.h>

int main(){
    char fname[20],mname[20],lname[20];
    printf("Enter Full Name: ");
    scanf("%s %s %s",&fname,&mname,&lname);
    printf("Abbreviated Name: %c.%c.%s",fname[0],mname[0],lname);

    return 0;
}