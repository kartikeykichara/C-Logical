#include<stdio.h>
// function declaration
void add();
void sub();
void mul();
void div();
int main()
{   

    add();
    sub();
    mul();
    div();

    return 0;
}
void add()
{
    int a,b,c;
    printf("Enter the value of a and b:");
    scanf("%d %d",&a,&b);
    c=a+b;
    printf("c %d",c);
}
void sub()
{
    int a,b,c;
    printf("Enter the value of a and b:");
    scanf("%d %d",&a,&b);
    c=a-b;
    printf("c %d",c);
}
void mul()
{
    int a,b,c;
    printf("Enter the value of a and b:");
    scanf("%d %d",&a,&b);
    c=a*b;
    printf("c %d",c);
}
void div()
{
    int a,b,c;
    printf("Enter the value of a and b:");
    scanf("%d %d",&a,&b);
    c=a/b;
    printf("c %d",c); 
}