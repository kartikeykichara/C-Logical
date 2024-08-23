#include<stdio.h>
void armstrong(int a);
void palindrome(int a);
void even(int a);
void sum(int a);
void count(int a);
void reverse(int a);
void factorial(int a);
void fib(int a);
int main()
{
    char a;
    printf("Enter any charcter:");
    scanf("%c",&a);
    if (a=='a')
    {
        int b;
        printf("Enter the value of a:");
        scanf("%d",&b);
        armstrong(b); 
    }
    else if (a=='p')
    {
        int b;
        printf("Enter the value of a:");
        scanf("%d",&b);
        palindrome(b);
    }
    else if (a=='e')
    {
                int b;
        printf("Enter the value of a:");
        scanf("%d",&b);
        even(b);
    }
    else if (a=='s')
    {
                int b;
        printf("Enter the value of a:");
        scanf("%d",&b);
        sum(b);
    }
    else if (a=='c')
    {
                int b;
        printf("Enter the value of a:");
        scanf("%d",&b);
        count(b);
    }
    else if (a=='r')
    {
                int b;
        printf("Enter the value of a:");
        scanf("%d",&b);
        reverse(b);
    }
    else if (a=='f')
    {
                 int b;
        printf("Enter the value of a:");
        scanf("%d",&b);
        factorial(b);
        
    }
    else if (a=='m')
    {
                int b;
        printf("Enter the value of a:");
        scanf("%d",&b);
        fib(b);
    }
    
    else
    {
        printf("input is not valid");
    }
    
    

   
    return 0;
}
void armstrong(int a)
{
    int temp=a;
    int rem,sum=0;
    while (a>0)
    {
        rem=a%10;
        sum=sum+rem*rem*rem;
        a=a/10;
    }
    if (temp==sum)
    {
        printf("number is armstrong");
    }
    else
    {
        printf(" not");
    }
    
}
void palindrome(int a)
{

        
        int rem,sum=0;
        int temp=a;
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
    
}
 void even(int a)
 {

    if (a%2==0)
     {
         printf("even");
     }
    else
    {
        printf("odd");
    }
 }
void sum(int a)
{
    int rem,sum=0;
    while (a>0)
    {
        rem=a%10;
        sum=sum+rem;
        a=a/10;
    }
    printf("sum %d",sum);
}
void count(int a)
{
   
    int count=0;
    while (a>0)
    {
        a=a/10;
        count++;
    }
    printf("count %d",count);
}
void reverse(int a)
{
          
        int rem,reverse=0;
        int temp=a;
        while (a>0)
        {
        rem=a%10;
        reverse=reverse*10+rem;
        a=a/10;
        }
        printf(" reverse %d",reverse);
       
}
void factorial(int a)
{
    int fact=1;
    for (int  i = 1; i<=a; i++)
    {
        fact=fact*i;
    }
    printf(" factorial %d",fact);
}
void fib(int a)
{
    int n1=0 ,n2=1,n3=2;
    printf("%d %d",n1,n2);
    for (int  i = 1; i <=a; i++)
    {
        n3=n1+n2;
        printf("%d",n3);
        n1=n2;
        n2=n3;
    }
    
}