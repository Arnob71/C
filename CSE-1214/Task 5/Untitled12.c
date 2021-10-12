#include<stdio.h>
int main()
{
int i,n,f=0;
printf("This is a program to check whether a number is prime number or not\n");
printf("Enter the number: ");
scanf("%d",&n);
for (i=2; i<=n /2; ++i) {
        if (n%i == 0) {
            f=1;
            break;
    }
}
if(n==1)
{
    printf("1 is neither prime nor composite number");
}
else
{
    if(f==0){
    printf("%d is a prime number",n);
    }
    else{
    printf("%d is not a prime number",n);
    }
}
return 0;
}
