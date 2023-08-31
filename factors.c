#include<stdio.h>

void main(){
    int a=10;
     printf("Factors are : ");
    for(int i=1;i<=a;i++){
        if(a%i==0){
           printf("\n%d ",i);
        }
    }
}