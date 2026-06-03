#include<stdio.h>
int main()
{
    int x,y,count=0;
    printf("ENter a number:");
    scanf("%d", &x);
    y=x;

    for(int i=1; i<=y; i++)
    {
        if(y%i==0)
        {
            count=count+1;

        }
        else if(y%i!=0)
        {
            count=count+0;
        }
    }

    if(count==2 && x>0)
    {
        printf("%d is PRIME", x);
    }
    
    else if(x<0)
    {
        printf("Enter a positive numberr !!");
    }
    else

    {
        printf("%d is NOT PRIME", x);
    }
    return 0;    

    
}