#include<stdio.h>

void main(){
    int num;// 9 , 9*9 =81->8+1=>9
  
    printf("Enter a number :");
    scanf("%d",&num);

    int temp=num;
    int power=num*num;
    int rem=0,sum=0;

    while(power>0){
        rem=power%10;
        sum+=rem;
        power/=10;
    }
   
    if (sum==temp){
        printf("It is a Neon number");
    }
    else{
        printf("It is not a neon number");
    }

}