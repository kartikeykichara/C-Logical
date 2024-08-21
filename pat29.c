#include<stdio.h>
int main()
{
    int k;
    for (int  i = 1; i <=4 ;)
    {
        for (int j = 1; j<=4; j++)
        {
            
            k=i*i;
             printf("%d",k);
           
        }
       
        i++;
        printf("\n");
    }
    return 0;
}