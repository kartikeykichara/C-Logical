#include<stdio.h>
int main()
{
   
    for (int  i = 1; i <=4 ;)
    {
        for (int j = 1; j<=4; j++)
        {
            int k;
            k=j*j;
             printf(" %d",k);
           
        }
       
        i++;
        printf("\n");
    }
    return 0;
}