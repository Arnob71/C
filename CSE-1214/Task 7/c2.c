#include<stdio.h>
void main(){
int i, num[5];
printf("This is a program to read n number of values in an array and display it in reverse order\n");
printf("Enter the number of values: ");
for (i=0; i<5; i++)
     scanf("%d",&num[i]);
printf("The Array values are: ");
for (i=4; i>=0; i--)
     printf("%d ", num[i]);
}
