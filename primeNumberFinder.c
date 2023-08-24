#include<stdio.h>

void main(){
    for(int i=1;i<=14;i++){
        int temp=0;
        for(int j=1;j<=i;j++){
            if(i%j==0){
                continue;
            }
            else{
                temp+=1;
                 //printf("\nprime number is %d",i);
            }
           // printf("\ni is %d and j is %d",i,j);
            
    }
    printf("\ntemp is %d",temp);
    if(temp<2){
        printf("\nprime number is %d",i);
    }
    }
}