#include<stdio.h>

// Adding the First and the last digit of a Number

void main(){

    int num,sum=0;
    int first,last;
    
    printf("Enter a number :");
    scanf("%d",&num);
    first = num;
    while(first>10){
        first/=10;
    }

    last=num%10;
    sum=first+last;
   
    printf("\nSum is : %d",sum);
}