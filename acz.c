#include<stdio.h>
int main()
{
    char a;
    printf("Enter any character:");
    scanf("%c",&a);
    if (a=='a')
    {
        printf("Apple");
    }
    else if (a=='b')
    {
        printf("Boy");
    }
    else if (a=='c')
    {
        printf("Cat");
    }
    else if (a=='d')
    {
        printf("Dog");
    }
    else
    {
        printf("input is not valid");
    }
    
    
    
    return 0;
}