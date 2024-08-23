#include<stdio.h>
void swap(int a, int b);
void wswap(int a, int b);
int main()
{
    int num1,num2;
    printf("Enter the value of num1 and num2:");
    scanf("%d %d",&num1,&num2);
    swap(num1,num2);
    wswap(num1 , num2);
  return 0;
}
void swap(int a , int b)
{
    printf("Value before swapping: %d %d",a,b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("value after swapping: %d %d ",a,b);
}
void wswap(int a, int b)
{
    int c;
    printf("Value before swapping: %d %d",a,b);
    c=a;
    a=b;
    b=c;
    printf("value after swapping: %d %d ",a,b);
}