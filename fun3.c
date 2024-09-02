#include<stdio.h>
void armstrong();
void palindrome();
void even();
void sum();
void count();
void reverse();
int main()
{
    char a;
    printf("Enter any charcter:");
    scanf("%c",&a);
    if (a=='a')
    {
        armstrong(); 
    }
    else if (a=='p')
    {
        palindrome();
    }
    else if (a=='e')
    {
        even();
    }
    else if (a=='s')
    {
        sum();
    }
    else if (a=='c')
    {
        count();
    }
    else if (a=='r')
    {
        reverse();
    }
    
    

   
    return 0;
}
void armstrong()
{
    int a;
     int temp=a;
    printf("Enter the value of a:");
    scanf("%d",&a);
    int rem,sum=0;
    
    while (a>0)
    {
        rem=a%10;
        sum=sum+rem*rem*rem;
        a=a/10;
    }
    if (temp==a)
    {
        printf("number is armstrong");
    }
    else
    {
        printf(" not");
    }
    
}
void palindrome()
{
        
        int a;
        
        printf("Enter number : ");
        scanf("%d",&a);
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
void even()
{
    int a;
    printf("Enter any number:");
    scanf("%d",&a);
    if (a%2==0)
    {
        printf("even");
    }
    else
    {
        printf("odd");
    }
}
void sum()
{
    int a;
    printf("enter any number");
    scanf("%d",&a);
    int rem,sum=0;
    while (a>0)
    {
        rem=a%10;
        sum=sum+rem;
        a=a/10;
    }
    printf("sum %d",sum);
}
void count()
{
    int a;
    printf("Enter the value of a:");
    scanf("%d",&a);
    int count=0;
    while (a>0)
    {
        a=a/10;
        count++;
    }
    printf("count %d",count);
}
void reverse()
{
          
        int a;
        
        printf("Enter number : ");
        scanf("%d",&a);
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