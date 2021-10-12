#include<stdio.h>
int main(){
int i,j,row,column;
printf("Enter the number of row: ");
scanf("%d",&row);
printf("Enter the number of column: ");
scanf("%d",&column);
for(i=1;i<=row;i++)
{
    for (j=1;j<=column;j++)
    {
        printf("1");
    }
    printf("\n");
}
return 0;
}
