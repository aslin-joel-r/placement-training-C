#include<stdio.h>

void main(){
    int a=10,b=12,c=13;
    int d=(a++ || ++b || ++c);
    // printf("\nPost increment %d",a++);
    // printf("\nPost increment %d",a);
    // printf("\nPre increment %d",++b);
    printf("\nPre increment %d",d);
    printf("\nc  %d",c);
    printf("\nb %d",b);
    printf("\na %d",a);
}