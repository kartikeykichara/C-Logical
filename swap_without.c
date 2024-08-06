#include<stdio.h>
int main()
{
    int a=20;
    int b=10;
    printf("The value of a is : %d\n",a );
    printf("The value of b is : %d\n",b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("The swap value of a is : %d\n",a);
    printf("The swap value of b is : %d\n",b);
    return 0;
}