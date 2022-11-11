#include<stdio.h>
int main()
{
    int x=1,n;
    printf("enter any number:");
    scanf("%d",&n);
    while(x<=10)
    {
        printf("%d X %d = %d\n",n,x,n*x);
        x++;
    }return 0;

}