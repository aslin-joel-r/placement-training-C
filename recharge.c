#include<stdio.h>

void main(){
    int icalls=100,isms=100,imb=1000,idays=28; // Initial datas
    int choice,calls,sms,mb,days; // Getting user datas
    int call2,sms2,mb2; // Remaining data
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
            printf("\nYour days pack is expired");
        }
        else{
            days=idays-days;
            printf("You have the %d remaining days",days);
            printf("\nEnter the calls :");
            scanf("%d",&calls);
            printf("calls is %d ",calls);
    
        
        if(calls>100){
            printf("\nYour calls is expired");
        }
        else{
            call2=icalls-calls;
            printf("You have the %d remaining calls",call2);

            // sms

              printf("\nEnter the sms :");
            scanf("%d",&sms);
            printf("sms is %d ",sms);
    
        
        if(sms>100){
            printf("\nYour sms is expired");
        }
        else{
            sms2=isms-sms;
            printf("You have the %d remaining sms",sms2);

            // data

             printf("\nEnter the data:");
            scanf("%d",&mb);
            printf("data is %d ",mb);
    
        
        if(mb>1000){
            printf("\nYour data is expired");
        }
        else{
            mb2=imb-mb;
            printf("You have the %d remaining data",mb2);

            
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