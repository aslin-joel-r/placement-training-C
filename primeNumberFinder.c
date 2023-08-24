#include<stdio.h>

void main(){
    int count=1;
    printf("The prime numbers are : ");
    for(int i=2;i<=10000;i++){
      int  factors=0;
        for(int j=1;j<=i;j++)
        {
            if(i%j==0){
                factors+=1; // for checking the no of factors
            }
               
        }
    //printf("\ntemp is %d %d",i,temp); // displays the factors
    if(factors<=2)
    {
        printf("\n%d) %d",count,i);
        count+=1;
    }
    }
}