#include<stdio.h>
#include <math.h>

void main(){
    
    int num,rem=0,sum=0;
    printf("Enter a number :");
    scanf("%d",&num);
     int temp=num;
     int digit=1;
     
     while(num>9){
        num/=10;
        digit++;
     }
      
      while(digit>0){
        rem=temp%10;
        temp/=10;
        int ans=pow(rem,digit);
        sum+=ans;
        digit--;
     }
   printf("\nAmstrong sum is %d",sum);
   
   
   
}