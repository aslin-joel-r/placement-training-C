#include<stdio.h>

void main(){
    int size,odd=0,even=0;
    int ocount=0,ecount=0;
    printf("Enter array size :");
    scanf("%d",&size);
    int arr[size];
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
     for(int j=0;j<size;j+=1){
        printf("\n%d",j);
       
        // below
        //even+=arr[j];
        odd+=arr[j];
    }
     for(int j=0;j<size;j++){
        printf("\n%d",j);
       
        // below
        even+=arr[j];
        //odd+=arr[j];
        j+=1;
    }
    printf("\nOdd Sum is : %d",odd);

    printf("\nEven Sum is : %d",even);
    int diff= even > odd ? even-odd : odd-even;
    printf("\nDifference is : %d",diff);
}