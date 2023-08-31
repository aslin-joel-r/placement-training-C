#include<stdio.h>

// Finding the first digit of a number an alternate way

void main(){
    int num;
    printf("Enter a number :");
    scanf("%d",&num);
    int digit=1;
    int mod=1;
    int first=0;
    while(num>9){
        num/=10;
        digit++;
        mod*=10; 
    }
     first=num;
   
    printf("Number of mod is %d",mod);
    printf("\nFirst Number  is %d",first);
}