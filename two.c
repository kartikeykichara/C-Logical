#include<stdio.h>
int main()
{
    char a;
    printf("Enter any character:");
    scanf("%c",&a);
    if (a=='a')
    {
        int num1,num2,num3;
        printf("Enter the value of num1 and num2: ");
        scanf("%d %d ",&num1,&num2);
        num3=num1+num2;
        printf("%d",num3);
    }
    else if (a=='s')
    {
        int n1,n2,sub;
        printf("Enter the value of n1 and n2:");
        scanf("%d %d",&n1,&n2);
        sub=n1-n2;
        printf("The sub is: %d",sub);
    }
    else if (a=='m')
    {
        int a1,a2,mul;
        printf("Enter the value of a1 anmd a2:");
        scanf("%d %d",&a1,&a2);
        mul=a1*a2;
        printf("The multiplication is: %d ",mul);

    }
    else if (a=='d')
    {
        int b,c,div;
        printf("Enter the value of b and c:");
        scanf("%d %d",&b,&c);
        div=b/c;
        printf("The diivision is : %d",div);
    }
    else if (a=='o')
    {
        int d,e,mod;
        printf("Enter the value of d and e:");
        scanf("%d %d",&d,&e);
        mod=d%e;
        printf("The modular is : %d",mod);
    }
    
    
    
    return 0;
}