#include<stdio.h>
void main(){
int i,n,sum=0;
float average;
printf("This is a program to find the sum and average of all elements of the array\n");
printf("Enter the size of the array: ");
scanf("%d",&n);
int num[n];
printf("Enter the values of array: ");
for (i=0;i<n;i++)
{
    scanf("%d",&num[i]);
}
printf("The sum is ");
for (i=0;i<n;i++)
{
    sum=sum+num[i];
    printf("%d",num[i]);
       if(num[i]<num[n-1])
    {
        printf("+");
    }
}
printf("=%d",sum);
average=sum/n;
printf("\nAverage is %d/%d=%.2f",sum,n,average);
}
