#include<stdio.h>
int main()
{
    int a,b;
    printf("enter two number:");
    scanf("%d %d",&a,&b);
    if (a>b)
    {
        printf("A is greater");
    }
    else
    {
        printf("B is greater");
    }
    return  0;
}