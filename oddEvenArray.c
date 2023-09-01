#include<stdio.h>

void main(){
    int size,odd=0,even=0;
    printf("Enter array size :");
    scanf("%d",&size);
    int arr[size];
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
     for(int j=0;j<size;j++){
        printf("\n%d",j);
        if(arr[j]==0){
             //printf("- Neither Even or Odd number");
        }
        else if(arr[j]%2==0 && arr[j]!=0){
            //printf("- Even number");
            even+=arr[j];
        }
        
        else{
            //printf("- Odd number");
            odd+=arr[j];
        }
    }
    printf("\nOdd Sum is : %d",odd);

    printf("\nEven Sum is : %d",even);
    int diff= even > odd ? even-odd : odd-even;
    printf("\nDifference is : %d",diff);
}