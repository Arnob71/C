#include<stdio.h>
int main()
{
   int N,i,sum=0;
   printf("This is a program to print all natural numbers in reverse from 1 to N and calculate its sum\n");
   printf("Enter the value of N: ");
   scanf("%d",&N);
   for(i=N;i>=1;i--)
{
    printf("%d ",i);
}
 for(i=1; i<=N; i++){
    sum=sum+i;
    }
printf("\nSum= %d", sum);
return 0;
}
