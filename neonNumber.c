#include<stdio.h>

void main(){
    int num;// 9 , 9*9 =81->8+1=>9
    int temp=num;
    printf("Enter a number :");

    int power=num*num;
    int rem,sum;
    while(num>0){
        rem=num%10;
        sum+=rem;
        num/=10;
    }
    printf("sum is %d",sum);

    if (sum==temp){
        printf("It is a Neon number");
    }
    else{
        printf("It is not a neon number");
    }

}