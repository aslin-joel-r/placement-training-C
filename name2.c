#include<stdio.h>
#include<math.h>
void main(){

    int num;
    printf("Enter a number :");
    scanf("%d",&num);
    int mid=num%2==0 ? num/2:(num/2)+1;

    for(int i=1;i<=num;i++){
        for(int j=1;j<=num;j++){
            if(i==1 || j==1 || (j==num && j<=mid) ||i==mid){
                    printf("*");
            }
            else{
                printf(" ");
            }
    }
printf("\n");
}

}