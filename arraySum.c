#include<stdio.h>

void main(){
    int arr[6] = {1,2,3,4,5,8};
    int sum = 0;
    for(int i=0; i<sizeof(arr) / sizeof(arr[0]); i++){
        sum += arr[i];
    }
    printf("Sum of array is : %d",sum);
}