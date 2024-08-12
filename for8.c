#include<stdio.h>
int main()
{
    int rem,sum=0;
    for (int i = 1; i <= 10; i++)
    {
        rem=i%10;
        sum=sum+rem;
        i=i/10;
    }
    printf("%d",sum);
    return 0;
}