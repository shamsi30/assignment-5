#include<stdio.h>
int main()
{
    int x=1,n;
    printf("enter any number:");
    scanf("%d",&n);
    while(x<=n)
    {
        printf("%d\t",x*x);
        x++;
    }
    return 0;
}