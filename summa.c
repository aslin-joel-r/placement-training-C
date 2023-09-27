// create a c program for grreting a customer
// input: name
// output: welcome name to the world of c programming
#include<stdio.h>
int main()
{
    char name[20];
    printf("Enter your name: ");
    scanf("%s",name);
    printf("Welcome %s to the world of c programming",name);
    return 0;
}
