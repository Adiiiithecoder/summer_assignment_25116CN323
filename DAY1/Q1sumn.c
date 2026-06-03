#include <stdio.h>
int main()
{
    int sum=0,i,n;
    printf("enter the number: ");
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
        sum=sum+i;
        printf("the sum of numbers are%d\n",sum);
        

    }
    return 0;
}