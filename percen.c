#include<stdio.h>
int main()
{
    int n1,n2,n3,n4,n5;
    printf("Enter the marks :");
    scanf("%d %d %d %d %d",&n1,&n2,&n3,&n4,&n5);
   
        if (n1>36 && n2>36 && n3>36 && n4>36 && n5>36)
        {          
             
            float average;
            average=(n1+n2+n3+n4+n5)/5;
            printf("Average : %f\n",average);
            int avg;
            float percent;
            avg=n1+n2+n3+n4+n5;
            percent=(avg/500.0)*100;
            printf("Percent : %f");
        }
        else
        {
            printf("fail");
        }
        return 0;
}