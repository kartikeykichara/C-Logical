#include<stdio.h>
int main()
{
    float a;
    printf("Enter the value of a:");
    scanf("%f",&a);
    float b;
    printf("Enter the value of b:");
    scanf("%f",&b);
    int c;
    printf("Enter the value of c:");
    scanf("%d",&c);
    int d;
    printf("Enyer the value of d:");
    scanf("%d",&d);
    float e;
    printf("Enter the value of e:");
    scanf("%f",&e);
    float f;
    printf("Enter the value of f:");
    scanf("%f",&f);
    float result= a*b-(c/d)-e+f;
    printf("%f",result);

}