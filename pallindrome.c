#include<stdio.h>

void main(){
    int num;
    printf("Enter a number :");
    scanf("%d",&num);

    int temp=num,rem,reverse;

    while(num>0){
        rem=num%10;
        reverse=reverse*10+rem;
        num/=10;
    }
    printf("%d Reverse : %d",reverse);
}