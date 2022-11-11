#include<stdio.h>
int main()
{
    int x=1,n;
    printf("enter any number:");
    scanf("%d",&n);
    while(x<=n)
    {
        if(x%2==0)
            printf("%d\t",x);
        x++;
    }
    return 0;
}