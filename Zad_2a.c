#include<stdio.h>
#include<math.h>
int main()
{ 
    double H=0.0,R=10,Volume=0.0,Area=0.0;
    printf("Enter the height:");
    scanf("%lf",&H);
    printf("\nEnter the length:");
    scanf("%lf",&R);
    Area= acos(R)*(R-H/R)*pow(R,2)-(R-H)*sqrt((2*R)*H-pow(H,2));
    Volume=Area*(2*R); 
    printf("\nThe volume is=%.3lf",Volume);
    return 0;
}