#include<stdio.h>
int main()
{
    int a;
    int count=0;
    printf("Enter number : ");
    scanf("%d",&a);
    while (a>=0)
    {
        a=a/10;
        count++;  
    }
    printf("%d",count);
    return 0;
}