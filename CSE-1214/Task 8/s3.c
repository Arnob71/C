#include<stdio.h>
#include<string.h>
void main()
{
int res;
char strs[9999],strt[9999];
printf("This is a program to reverse a string and compare it with another string\n");
printf("Enter the string S: ");
gets(strs);
printf("Enter the string T: ");
gets(strt);
strrev(strs);
res=strcmp(strs,strt);
if (res==0)
{
    printf("Yes");
}
else
{
    printf("No");
}
}
