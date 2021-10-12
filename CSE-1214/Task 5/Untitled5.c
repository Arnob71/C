#include<stdio.h>
int main()
{
    int i;
    printf("This is program to show all the odd numbers from 1 to 50\n");
    for(i=1; i<=50; i+=2)
    {
        printf("%d ",i);
    }
    return 0;
}
