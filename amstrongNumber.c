#include<stdio.h>
#include <math.h>

void main(){
    
    int num,rem=0;
    int temp=num;
    int sum=0;
    printf("Enter a number :");
    scanf("%d",&num);
    int digit=1;
     while(num>9){
        num/=10;
        digit++;
     }
     while(digit){
        rem=num%10;
        temp/=10;
        sum+=pow(rem,digit);
     }
   printf("Number of Digit is %d",digit);
   
}