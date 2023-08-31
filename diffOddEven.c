#include<stdio.h>
#include<math.h>

void main(){
    int num;

    int even=0,odd=0,temp,rem;
     printf("Enter a number :");
    scanf("%d",&num);
    while(num>0){
        rem=num%10;
        num/=10;
    if(rem%2==0){
        even+=rem;
    }
    else{
        odd+=rem;
    }
    }
   // printf("Odd sum is %d",odd);

   // printf("\nEven sum is %d",even);
    int diff=even-odd;
    diff=abs(diff);
 printf("\nDifference is : %d",diff);
}