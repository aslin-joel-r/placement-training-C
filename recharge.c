#include<stdio.h>

void main(){
    int icalls=100,isms=100,imb=1000,idays=28; // Initial datas
    int choice,calls,sms,mb,days; // Getting user datas
   
    printf("Select your Pack : ");
    printf("\n1)199 \n2)299 \n3)799");
    printf("\nEnter Your choice : ");
    scanf("%d",&choice);
    switch(choice){
        case 1:
        printf("You have selected pack 1");
        printf("\nEnter the days :");
        scanf("%d",&days);
     
        if(days>28){
            printf("\nYour days pack is expired");
        }
        else{
            days=idays-days;
            printf("You have the %d remaining days",days);
            printf("\nEnter the calls :");
            scanf("%d",&calls);
          
        if(calls>100){
            printf("\nYour calls is expired");
        }
        else{
            calls=icalls-calls;
            printf("You have the %d remaining calls",calls);

            // sms
            printf("\nEnter the sms :");
            scanf("%d",&sms);
          
        if(sms>100){
            printf("\nYour sms is expired");
        }
        else{
            sms=isms-sms;
            printf("You have the %d remaining sms",sms);

            // data

            printf("\nEnter the data:");
            scanf("%d",&mb);
    
        if(mb>1000){
            printf("\nYour data is expired");
        }
        else{
            mb=imb-mb;
            printf("You have the %d remaining data",mb);
        }
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
}