#include<stdio.h>
void main()
{
    char st[1000];
    int i,countp=0,countj=0;
    printf("This is a program to count p and j in a string\n");
    printf("Enter the string: ");
    gets(st);
    for(i=0;st[i]!='\0';++i)
    {
        if (st[i]=='p'){
        ++countp;}
        if (st[i]=='j'){
        ++countj;}
    }
    if(countp%2==0 && countj%2==0)
        {printf("p=%d\nj=%d",countp,countj);}
    else
        printf("NO");
}
