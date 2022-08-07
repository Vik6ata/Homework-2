#include<stdio.h>
#include<math.h>
int main()
{
    float kilograms=0.0f;
    float height=0.0f;
    float BMI=0.0f;

    printf("Please enter your mass in kg:");
    scanf("%f\n",&kilograms);
    printf("Please enter your height in meters:");
    scanf("%f\n",&height);
    BMI=kilograms/pow(height,2);
    printf("Your BMI is:%.3f",BMI);
    return 0;
}