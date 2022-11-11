#include<stdio.h>
int main()
{
    int x,n;
    printf("enter any number:");
    scanf("%d",&n);
    x=n;
    while(x>=1)
    {
        if(x%2==0)
            printf("%d\t",x);
        x--;
    }
    return 0;
}