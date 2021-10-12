#include<stdio.h>
int main(){
int row, column, i, j;
    printf("Enter number of row: ");
    scanf("%d", &row);
    printf("Enter number of column: ");
    scanf("%d", &column);

    for(i=1; i<=row; i++)
    {
    for(j=1; j<=column; j++)
    {
    if(i==1||i==row||j==1||j==column)
    {
    printf("1");
    }
    else
    {
    printf("0");
    }
    }
    printf("\n");
    }
return 0;
}
