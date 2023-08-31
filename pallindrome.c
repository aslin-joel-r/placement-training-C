#include<stdio.h>

void main(){
    int num;
    printf("Enter a number :");
    scanf("%d",&num);

    int temp=num,rem=0,reverse=0;

    while(num>0){
        rem=num%10;
        reverse=reverse*10+rem;
        num/=10;
    }
    printf("Reverse : %d",reverse);
    if(reverse==temp){
        printf("\nThe number %d is pallindrome",temp);
    }
    else{
         printf("\nThe number %d is not a pallindrome",temp);
    }
}