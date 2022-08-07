#include<stdio.h>

int main()
{ int bit1,bit2;
  
 
 scanf("%d",&bit1);
 scanf("%d",&bit2);

 if(bit1==0||bit1==1 && bit2==0||bit2==0)
 {
   if(bit1==bit2)
   {
    printf("The result of XOR is 0\n");
   }
   else
   {
     printf("The result of XOR is 1\n");
   }
 }
}