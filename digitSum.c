#include<stdio.h>
void main(){
    
    int num=29999,sum=0,tem;
   while(num>0){
        tem=num%10; // 29999 %10=9
        sum+=tem;// 0+9
        num/=10;// 2999
   }
   num=sum;
   sum=0;
   
   tem=0;
   while(num>0){
         tem=num%10;
         sum+=tem;
         num/=10;
   }
     num=sum;
   sum=0;
   
   tem=0;
   while(num>0){
         tem=num%10; 
         sum+=tem;
         num/=10;
   }
   printf("Sum is : %d",sum);
   printf("\n Num is : %d",num);
}