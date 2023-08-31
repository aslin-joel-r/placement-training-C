#include<stdio.h>
#include <math.h>

void main(){
    
    int num,rem=0;
    int sum;
    printf("Enter a number :");
    scanf("%d",&num);
     int temp=num;
     int digit=1;
    
     while(num>9){
        num/=10;
        digit++;
     }
      int d=digit;
     while(digit>0){
        rem=temp%10;
       //  printf("Reamainder is %d",rem);
        temp/=10;
       //  printf("Temp is %d",temp);
        int p=pow(rem,d);
       // printf("\npower is : %d",p);
        sum+=p;
        // printf("\nAmstrong sum is %d",sum);
        digit--;
     }
   printf("\nAmstrong sum is %d",sum);
   
}