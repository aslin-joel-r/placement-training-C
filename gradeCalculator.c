#include<stdio.h>

// Grade calculator program

void main(){
   int mark;
   printf("Enter Your Mark :");
   scanf("%d",&mark);
   char grade;

     if(mark>=90  &&  mark<=100){
        grade='S';
        printf("Your Grade is %c",grade);
   }
     else if(mark>=80 && mark<90){
       // grade='A';
        printf("Your Grade is %c",grade='A');
   }
  else if(mark>=70 && mark<80){
        grade='B';
        printf("Your Grade is %c",grade);
   }
     else if(mark>=60 && mark<70){
        grade='C';
        printf("Your Grade is %c",grade);
   }
     else if(mark>=50 && mark<60){
        grade='D';
        printf("Your Grade is %c",grade);
   }
     else{
        grade='E';
        printf("Your Grade is %c",grade);
   }
}