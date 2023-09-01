#include<stdio.h>
#include<stdlib.h>
int main() 
{
    int a,lar=0;
    scanf("%d",&a);
    int ar[a];
    for(int i=0;i<a;i++)
    {
        scanf("%d",&ar[i]);
    }
   for(int i=0;i<a;i++)
    {
        if(i>lar){
            lar=ar[i];
            
        }
    }
    printf("Largest num is :%d",lar);
}
