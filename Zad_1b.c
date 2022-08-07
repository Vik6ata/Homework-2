#include<stdio.h>
#include<math.h>
int main()
{
    float mass=0.0f;
    float height=0.0f;
    float BMI=0.0f;
    float BMInew=0.0f;

    printf("Please enter your mass in kg:");
    scanf("%f",&mass);
    printf("Please enter your height in meters:");
    scanf("%f",&height);
    BMI=mass/pow(height,2);
    BMInew=1.3*(mass/pow(height,2.5));
    printf("Your BMI is:%.3f\n",BMI);
    printf("Your BMI with Treften's formula is:%.3f",BMInew);

    return 0;
}