#include<stdio.h>

void main(){
    int num;

    int even=0,odd=0,temp,rem;
    printf("Enter a number :");
    scanf("%d",&num);
    while(num>0)
    {
        rem=num%10;
        num/=10;
            if(rem%2==0)
            {
                even+=rem;
                }
            else{
                odd+=rem;
                }
    }
    int diff= even > odd ? even-odd : odd-even;
    printf("\nDifference is : %d",diff);
}