#include<stdio.h>
int main()
{
int i,j,row;
printf("Enter the no of rows: ");
scanf("%d",&row);
for(i=1;i<=row;i++)
{
for(j=1;j<=i;j++)
{
    printf("%d",j);
}
for(j=i*2;j<row*2;j++)
{
    printf(" ");
}
for(j=i;j>=1;j--)
{
    printf("%d",j);
}
    printf("\n");
}
return 0;
}
