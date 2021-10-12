
#include <stdio.h>

int main()
{
    int row, column, i, j;
    printf("Enter number of rows: ");
    scanf("%d", &row);
    printf("Enter number of columns: ");
    scanf("%d", &column);
    for(i=1; i<=row; i++)
    {
    for(j=i; j< i+column; j++)
    {
    printf("%d", j);
    }
    printf("\n");
    }
    return 0;
}
