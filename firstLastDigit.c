#include<stdio.h>
void main(){

    int num=29576,sum=0,tem;
    int first,second,last,last2;
    
    first = num/1000;
   // second= first%10;
    last=num%100;
    sum=first+last;
   printf("first : %d",first);
   printf("\nSecond is : %d",last);
   printf("\nSecond is : %d",sum);
}