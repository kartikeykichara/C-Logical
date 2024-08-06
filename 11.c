#include<stdio.h>
int main()
{
    float a;
    printf("Enter hr value of a:");
    scanf("%f",&a);
    int b;
    printf("Enter the value of b:");
    scanf("%d",&b);
    int c;
    printf("Enter the value of c:");
    scanf("%d",&c);

    float e;
    printf("Enter the value of e:");
    scanf("%f",&e);
    float f;
    printf("Enter the value of f:");
    scanf("%f",&f);
    float result=a*(b-c)/c+e-f;
    printf("%f",result);
    return 0;
}