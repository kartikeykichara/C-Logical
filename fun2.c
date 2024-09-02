#include<stdio.h>
void swap();
void wswap();
int main()
{
    swap();
    wswap();
    return 0;
}
void swap()
{
    int a,b,c;
    printf("Enter the value of a and b:");
    scanf("%d %d",&a,&b);
    printf("Value before swapping \n");
    c=a;
    a=b;
    b=c;
    printf("value after swapping : %d %d \n",a,b);
}
void wswap()
{
    int a,b;
    printf("Enter the value of a and b:");
    scanf("%d %d",&a,&b);
    printf("Value before swapping \n");
    a=a+b;
    b=a-b;
    a=a-b;
    printf("value after swapping : %d %d \n",a,b);
}