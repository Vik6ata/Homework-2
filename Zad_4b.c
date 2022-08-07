#include<stdio.h>

int main()
{ int bit1,bit2,bit3;
  
 
 scanf("%d",&bit1);
 scanf("%d",&bit2);
 scanf("%d",&bit3);


 if(bit1==0||bit1==1&& bit2==0||bit2==1&& bit3==0||bit3==1)
 {
   if(bit1==bit2==bit3)
   {
    printf("The result of XOR is 0\n");
   }
   else
   {
     printf("The result of XOR is 1\n");
   }
 }
}