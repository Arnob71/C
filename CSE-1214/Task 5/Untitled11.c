#include<stdio.h>
int main()
{
    int i,n,result=1;
    printf("This is a program to calculate factorial of a number\n");
    printf("Press any number: ");
    scanf("%d",&n);
    if (n<1){
        printf("Factorial of negative numbers are undefined");
    }
    else {
    for (i=1;i<=n;++i)
    {
        result*=i;}
        printf("Factorial= %d" ,result);
    }
    return 0;
}
