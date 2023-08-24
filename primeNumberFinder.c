#include<stdio.h>

void main(){

    for(int i=1;i<=100;i++){
      int  temp=0;
        for(int j=1;j<=i;j++){
            if(i%j==0){
                temp+=1;
            }
            else{
                
            }     
    }
    //printf("\ntemp is %d %d",i,temp);
    if(temp<=2){
        printf("\nprime number is %d",i);
    }
    }
}