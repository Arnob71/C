#include<stdio.h>
int main ()
{
int n,m,result;
printf("This is a program to show multiplication table of any number\n");
printf("Press any number: ");
scanf("%d",&n);
for(m=1;m<=10;m++)
{
    result=n*m;
    printf("%d*%d=%d\n",n ,m ,result);
}
    return 0;
}
