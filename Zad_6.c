#include<stdio.h>
#include<math.h>
int main()
{
 float num1=1.1f;
 float num2=0.0f;
 double num3=1.1;
 double num4=0.0;

 for(int i=0;i<11;i+=0.1)
 {
    num2+=0.1;
 }

 for(int i=0;i<11;i+=0.1)
 {
    num4+=0.1;
 }
 if(num1==num2)
 {
    printf("Equals!");
 }
 else{
    printf("Not equals!");
 }
 if(fabs(num1-num2)<1.0e-5f)
 {
   printf("\nEquals!\n");
 }
 else
 {
   printf("\nNot equals!\n");
 }
 
 if(fabs(num1-num2)<1.0e-5f)
 {
   printf("\nEquals!\n");
 }
 else
 {
   printf("Not equals!");
 }
  if(fabs(num3-num4)<1.0e-5f)
 {
   printf("\nEquals!\n");
 }
 else
 {
   printf("\nNot equals!\n");
 }

 if(fabs(num3-num4)<0.00001e-5f)
 {
   printf("\nEquals!\n");
 }
 else
 {
   printf("\nNot equals!\n");
 }

 printf("The error between float type numbers:%.5f",fabs(num1-num2));
 printf("\nThe error between double type numbers:%.5lf",fabs(num3-num4));




 
 return 0;
}