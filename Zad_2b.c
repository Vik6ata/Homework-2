#include<stdio.h>
#include<math.h>
int main()
{
 double R=0.0,L=0.0,H=0.0,Area=0.0,Volume=0.0;
 printf("Enter radius:");
 scanf("%lf",&R);
 printf("\nEnter length:");
 scanf("%lf",&L);
 printf("\nEnter height:");
 scanf("%lf",H);
 Area=acos(R)*(R-H/R)*pow(R,2)-(R-H)*sqrt((2*R)*H-pow(H,2));
 Volume=Area*L;
 printf("\nThe volume is:%3.lf",Volume);

}