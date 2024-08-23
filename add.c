#include<stdio.h>
void add(int a, int b);
void sub(int a, int b);
void mul(int a ,int b);
void div(int a, int b);
int main()
{
    add(4 ,5);
    sub(5, 4);
    mul(4 ,3);
    div(4, 2);
    return 0;
}
void add(int a , int b)
{
    int c;
    c=a+b; 
    printf("add %d \n",c);
}
void sub(int a,int b)
{
    int c;
    c=a-b;
    printf("sub %d \n",c);
}
void mul(int a,int b)
{
    int c;
    c=a*b;
    printf("mul %d \n",c);
}
void div(int a,int b)
{
    int c;
    c=a/b;
    printf("div %d",c);
}