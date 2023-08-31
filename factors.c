#include<stdio.h>

void main(){
    int a;
    printf("Enter a number :");
    scanf("%d",&a);
    printf("Factors are : ");
    for(int i=1;i<=a;i++){
        if(a%i==0){
           printf("\n%d ",i);
             for(int j=1;j<=i;j++){
                if(i%j==0){
                    printf("\n\tSub factors is :%d ",j);
           
        }
        
    }
        }
        
    }
}