#include<stdio.h>
int main()
{
    char a;
    printf("Enter any character :");
    scanf(" %c",&a);
    if (a=='a')
    {
        int a=1,sum=0;
        while (a<=10)
        {
            if (a%2==0)
            {
                sum=sum+a;
                
            }
          a++;  
        }
        printf("%d",sum);
    }
    else if (a=='b')
    {
        int a=1,sum=0;
        while (a<=10)
        {
            if (a%2!=0)
            {
                sum=sum+a;
            }
            a++;
        }
        printf("%d",sum);
    }
    
    return 0;
}