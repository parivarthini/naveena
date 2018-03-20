#include<stdio.h>
void main()
{
    int n,c=0,i;
    printf("enter the n value");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        c=c+i;
    }
    printf("%d",c);
}
