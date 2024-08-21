#include<stdio.h>
int main()
{
    for (int i = 1; i <=6; i++)
    {
        
        
        for (int j =1; j<=i; j++)
        {
           
            printf("%d",j);
        }
        
         if(i%2==0)
        {printf("\n");
        }
    }
    return 0;
}