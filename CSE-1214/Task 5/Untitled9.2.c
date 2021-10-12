#include<stdio.h>
int main(){
int i,j,row,column;
printf("Enter the number of row: ");
scanf("%d",&row);
printf("Enter the number of column: ");
scanf("%d",&column);
for(i=1;i<=row;i++)
{
    for(j=1;j<=row;j++)
    {
    if(i%2==0)
        {printf("1");}
        else
        {printf("0");}
    }
    printf("\n");
}
return 0;
}
