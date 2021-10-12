#include<stdio.h>
int main()
{
    int n,ln;
    printf("This is a program to find first and last digit of a number\n");
    printf("Enter the number: ");
    scanf("%d",&n);
    ln=n%10;
    while (n>=10){
            n=n/10;
    }
    printf("The first digit of the number is %d \n",n);
    printf("The last digit of the number is %d",ln);
    return 0;
}
