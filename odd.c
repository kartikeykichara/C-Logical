#include<stdio.h>
int main()
{
    char a;
    printf("Enter any one character : ");
    scanf("%c",&a);
    if (a=='a')
    {
        int a=1;
        while (a<=10)
        {
            if (a%2!=0)
            {
                printf("%d\n",a);
            }
           a++; 
        }  
        
    }
    else if (a=='b')
    {
        int b=1;
        while (b<=100)
        {
            if (b%2!=0)
            {
                printf("%d\n",b);
            }
            b++;
        }
        
    }
    else if (a=='c')
    {
        int c=50;
        while (c<=100)
        {
            if (c%2!=0)
            {
                printf("%d\n",c);
            }
            c++;
        }
        
    }
    else if (a=='d')
    {
        int d=45;
        while (d<=89)
        {
            if (d%2!=0)
            {
                printf("%d\n",d);
            }
            d++;
        }
        
    }
    else if (a=='e')
    {
        int e=10;
        while (e>=1)
        {
            if (e%2!=0)
            {
                printf("%d\n",e);
            }
          e--;  
        }
        
    }
    else if (a=='f')
    {
        int f=100;
        while (f>=1)
        {
            if (f%2!=0)
            {
                printf("%d\n",f);
            }
            f--;
        }
        
    }
    else if (a=='g')
    {
        int g=100;
        while (g>=50)
        {
            if (g%2!=0)
            {
                printf("%d\n",g);
            }
            g--;
        }
        
    }
    else if (a=='h')
    {
        int h=89;
        while (h>=45)
        {
            if (h%2!=0)
            {
                printf("%d\n",h);
            }
            h--;
        }
        
    }
    
    return 0;


}