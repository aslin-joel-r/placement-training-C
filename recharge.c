#include<stdio.h>

void main(){
    int icalls=100,isms,imb=100,idays=28;
    int choice,calls,sms,mb,days,call2;
    printf("Select your Pack : ");
    printf("\n1)199 \n2)299 \n3)799");
    printf("\nEnter Your choice : ");
    scanf("%d",&choice);
    switch(choice){
        case 1:
        printf("You have selected pack 1");
        printf("\nEnter the days :");
        scanf("%d",&days);
        //calls=icalls-calls;
        if(days>28){
            printf("\nYou have existed");
        }
        else{
            days=idays-days;
            printf("You have the %d remaining days",days);
            printf("\nEnter the calls :");
            scanf("%d",&calls);
            printf("calls is %d ",calls);
    
        
        if(calls>100){
            printf("\nYou have existed");
        }
        else{
            call2=icalls-calls;
            printf("You have the %d remaining calls",call2);
        }
            
        }
        break;

        case 2:
        printf("You have selected pack 2");
        break;

        case 3:
        printf("You have selected pack 3");
        break;

        default:
        printf("The pack is not valid");
        
    }
}