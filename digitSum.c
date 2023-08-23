#include<stdio.h>
void main(){
    
    int num=29999,sum=0,tem;
   while(num>0){
        tem=num%10;
        sum+=tem;
        num/=10;
   }
   printf("Sum is : %d",sum);
}