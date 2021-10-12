#include<stdio.h>
int main()
{
    int i,n,c,e;
    printf("This is program to print all even numbers between a range (0 to n) and count its number\n");
    scanf("%d",&n);
    for(i=0; i<=n; i+=2)
    {
        printf("%d ",i);
    }
    e=(n+2)/2;
    if (e%2==0)
    {
    printf("\n%d even numbers found between the range 0 to %d",e,n);
    }
    else
    {
        printf("\n%d even numbers found between the range 0 to %d",e,n);
    }
    return 0;
}
