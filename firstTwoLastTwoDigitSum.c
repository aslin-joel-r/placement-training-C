#include<stdio.h>
void main(){

    int num,sum=0,tem;
    int first,second,last,last2;
    
    printf("Enter a number :");
    scanf("%d",&num);
    first = num;
    while(first>100){
        first/=10;
    }

   // second= first%10;
    last=num%100;
    sum=first+last;
   printf("\nFirst : %d",first);
   printf("\nSecond is : %d",last);
   printf("\nSum is : %d",sum);
}