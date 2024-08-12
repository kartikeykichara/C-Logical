#include<stdio.h>
int main()
{
    int a;
    int rem,sum=0;
    int temp=a;
    printf("Enter number : ");
    scanf("%d",&a);
    while (a>0)
    {
        rem=a%10;
        sum=sum*10+rem;
        a=a/10;
    }
    printf("%d",sum);
    if (temp==sum)
    {
        printf("Number is palindrome");
    }
    else
    {
        printf("Not Palindrome");
    }
    return 0;
}