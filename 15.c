#include<stdio.h>
int main()
{
    float a;
    printf("Enter the value of a:");
    scanf("%f",&a);
    float b;
    printf("Enter the value of b:");
    scanf("%f",&b);
    float c;
    printf("Enter the value of c:");
    scanf("%f",&c);
    float d;
    printf("Enter the value of d:");
    scanf("%f",&d);
    float e;
    printf("Enter the value of e:");
    scanf("%f",&e);
    int f;
    printf("Enter the value of f:");
    scanf("%f",&f);
    int g;
    printf("Enter the value of g:");
    scanf("%d",&g);
    float result=a*b-(c-d)+e-f+g;
    printf("%f",result);
    return 0;
    
}