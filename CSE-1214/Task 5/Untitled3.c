#include<stdio.h>
int main()
{
    int i,N;
    printf("This is a program to print all natural numbers in reverse (from N to 1)\n");
    printf("Enter the value: ");
    scanf("%d",&N);
    i=N;
    while(i>=1)
    {
        printf("%d ",i);
        i--;
    }
    return 0;
}
