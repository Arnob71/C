#include<stdio.h>
int main()
{
    int i,N;
    printf("This is a program to read a value N and print all natural numbers from 1 to N\n");
    printf("Enter the value of N: ");
    scanf("%d",&N);
    for(i=1; i<=N; i++)
    {
        printf("%d ",i);
    }
    return 0;
}
