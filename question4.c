#include<stdio.h>
int main()
{
    int n,x=1;
    printf("enter any number:");
    scanf("%d",&n);
    while(x<=n)
    {
        printf("%d\t",x);
        x++;
    }
    return 0;
}