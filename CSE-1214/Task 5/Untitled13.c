#include<stdio.h>
int main()
{
    int i,n,x1=0,x2=1,nextnum;
    printf("This is a program to print Fibonacci series up to n terms\n");
    printf("Press any number: ");
    scanf("%d",&n);
    for (i=1; i<=n; ++i) {
    printf("%d ", x1);
    nextnum=x1+x2;
    x1=x2;
    x2=nextnum;
    }
    return 0;
}
