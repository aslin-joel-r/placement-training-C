#include<stdio.h>

void main(){
    int a=677;
    int seat=a%8;
    
   switch(seat){

    case 1:
        printf("L Lower");
        break;

    case 2:
        printf("L middle");
        break;

    case 3:
        printf("L upper");
        break;

    case 4:
        printf("R Lower");
        break;
      
    case 5:
        printf("R Middle");
        break;
    
    case 6:
        printf("R Upper");
        break;

    case 7:
        printf("Side lower");
        break;

    default :
        printf("Side upper");
   }

}