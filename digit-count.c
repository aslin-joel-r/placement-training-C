#include<stdio.h>

// Finding the number of digits in a number

void main(){
    int num;
    printf("Enter a number :");
    scanf("%d",&num);
    int digit=1;
     while(num>9){
        num/=10;
        digit++;
     }
   printf("Number of Digit is %d",digit);
}