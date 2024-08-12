#include<stdio.h>
int main()
{
    int n;
    printf("enter the value of n:");
    scanf("%d",&n);
    int n1=0,n2=1,n3;
    for (int i = 1; i <= n; i++)
    {
        n3=n1+n2;
        printf("%d",n);
        n1=n2;
        n2=n3;
    }
    return 0;
}