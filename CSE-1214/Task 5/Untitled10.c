#include<stdio.h>
int main()
{
    int n,rn,on,rm;
    printf("This is a program to check whether a number is palindrome or not\n");
    printf("Enter the number: ");
    scanf("%d",&n);
    on=n;
    while(n!=0){
        rm=n%10;
        rn=rn*10+rm;
        n/=10;
    }
    if (on==rn)
       printf("%d is a palindrome number",on);
    else
       printf("%d is not a palindrome number",on);
 return 0;
}
