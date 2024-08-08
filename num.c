#include<stdio.h>
int main()
{
    char a;
    printf("Enter any one character : ");
    scanf("%c",&a);
    if (a=='a')
    {
        int b=1;
        while (b<=10)
        {
            printf("%d\n ",b);
            b++;
        }
        
    }
    else if (a=='b')
    {
        int c=1;
        while (c<=100)
        {
            printf("%d\n",c);
            c++;
        }
        
    }
    else if (a=='c')
    {
        int d=50;
        while (d<=100)
        {
            printf("%d\n",d);
            d++;
        }
        
    }
    else if (a=='e')
    {
        int e=5;
        while (e<=89)
        {
            printf("%d\n",e);
            e++;
        }
        
    }
    else if (a=='f')
    {
        int f=10;
        while (f>=1)
        {
            printf("%d\n",f);
            f--;
        }
        
    }
    else if (a=='g')
    {
        int g=100;
        while (g>=50)
        {
            printf("%d\n",g);
            g--;
        }
        
    }
    else if (a=='h')
    {
        int h=89;
        while (h>=45)
        {
            printf("%d\n",h);
            h--;
        }
        
    }
    
    return 0;
}