#include<stdio.h>
int main()
{
    char a;
    printf("Enter any character:");
    scanf("%c",&a);
    if (a=='s')
    {
        int b;
        printf("Enter the value of b:");
        scanf("%d",&b);
        int c;
        printf("Enter the value of c:");
        scanf("%d",&c);
        b=b+c;
        c=b-c;
        b=b-c;
        printf("after swapping b: %d",b);
        printf("after swapping c: %d",c);

    }
    else if (a=='w')
    {
        int e,f,g;
        printf("Enter the value of e and f:");
        scanf("%d %d",&e,&f);
        g=e;
        e=f;
        f=g;
        printf("after swapping the value of e: %d",e);
        printf("after swapping the value of f: %d",f);
    }
    
   return 0;   
}