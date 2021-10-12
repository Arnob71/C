#include<stdio.h>
void main()
{
int num;
    printf("Press 1: Insert\n");
    printf("Press 2: Delete\n");
    printf("Press 3: Update\n");
    printf("Press 4: Exit\n");
    scanf("%d", &num);
    if(num==1)
    {printf("Call Insert Function.\n");}
    else if (num==2)
    {printf("Call Delete Function.\n");}
    else if (num==3)
    {printf("Call Update Function.\n");}
    else if (num==4)
    {printf("Program terminated.\n");}
    else
    {printf("Wrong Input.Try again\n");}
    while (num!=4){
    printf("Press 1: Insert\n");
    printf("Press 2: Delete\n");
    printf("Press 3: Update\n");
    printf("Press 4: Exit\n");
    scanf("%d", &num);
    if(num==1)
    printf("Call Insert Function.\n");
    else if (num==2)
    printf("Call Delete Function.\n");
    else if (num==3)
    printf("Call Update Function.\n");
    else if (num==4)
    printf("Program terminated.\n");
    else
    printf("Wrong Input.Try again\n");
}
}
