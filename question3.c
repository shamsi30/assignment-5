#include<stdio.h>
int main()
{
    int n,x;
    printf("enter any number:");
    scanf("%d",&n);
    x=n;
    while(x>=1)
    {
        printf("%d\t",x);
        x--;
    }
    return 0;
}