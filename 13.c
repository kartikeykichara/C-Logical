#include<stdio.h>
int main()
{
    int a;
    printf("Enter the value of a:");
    scanf("%d",&a);
    int b;
    printf("Enter the value of b:");
    scanf("%d",&b);
    int c;
    printf("Enter the value of c:");
    scanf("%d",&c);
    int d;
    printf("Enter the value of d:");
    scanf("%d",&d);
    int e;
    printf("Enter the value of e:");
    scanf("%d",&e);
    int f;
    printf("Enter the value of f:");
    scanf("%d",&f);
    int result=a*b+(c-d)/e+f;
    printf("%d",result);
    return 0;
    
}