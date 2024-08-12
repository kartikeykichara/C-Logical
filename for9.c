#include<stdio.h>
int main()
{
    int fact=1;
    int a;
    printf("enter the value of a:");
    scanf("%d",&a);
    for (int i = 1; i <=a; )
    {
        fact=fact*i;
    }
    printf("%d",fact);
    return 0;
}