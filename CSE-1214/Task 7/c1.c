#include<stdio.h>
int prob1()
{
    int i,N;
    printf("\nSolution 1.This is a program to read a value N and print all natural numbers from 1 to N\n");
    printf("Enter the value of N: ");
    scanf("%d",&N);
    for(i=1; i<=N; i++)
    {
        printf("%d ",i);
    }
    return 0;
}
int prob2()
{
    char i;
    printf("\nSolution 2.This is a program which prints all the alphabets from A to Z\n");
    for(i=65;i<=90;i++)
    {
        printf("%c ",i);
    }
    return 0;
}
int prob3()
{
    int i,N;
    printf("\nSolution 3.This is a program to print all natural numbers in reverse (from N to 1)\n");
    printf("Enter the value: ");
    scanf("%d",&N);
    i=N;
    while(i>=1)
    {
        printf("%d ",i);
        i--;
    }
    return 0;
}
int prob4()
{
   int N,i,sum=0;
   printf("\nSolution 4.This is a program to print all natural numbers in reverse from 1 to N and calculate its sum\n");
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
int prob5()
{
    int i;
    printf("\nSolution 5.This is program to show all the odd numbers from 1 to 50\n");
    for(i=1; i<=50; i+=2)
    {
        printf("%d ",i);
    }
    return 0;
}
int prob6()
{
    int i,n,c,e;
    printf("\nSolution 6.This is program to print all even numbers between a range (0 to n) and count its number\n");
    printf("Enter the value of N: ");
    scanf("%d",&n);
    for(i=0; i<=n; i+=2)
    {
        printf("%d ",i);
    }
    e=(n+2)/2;
    if (e%2==0)
    {
    printf("\n%d even numbers found between the range 0 to %d",e,n);
    }
    else
    {
        printf("\n%d even numbers found between the range 0 to %d",e,n);
    }
    return 0;
}
int prob7()
{
    int n,ln;
    printf("\nSolution 7.This is a program to find first and last digit of a number\n");
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
int prob8 ()
{
int n,m,result;
printf("\nSolution 8.This is a program to show multiplication table of any number\n");
printf("Press any number: ");
scanf("%d",&n);
for(m=1;m<=10;m++)
{
    result=n*m;
    printf("%d*%d=%d\n",n ,m ,result);
}
    return 0;
}
int prob901(){
int i,j,row,column;
printf("1.Enter the number of rows: ");
scanf("%d",&row);
printf("  Enter the number of columns: ");
scanf("%d",&column);
for(i=1;i<=row;i++)
{
    for (j=1;j<=column;j++)
    {
        printf("1");
    }
    printf("\n");
}
return 0;
}
int prob902(){
int i,j,row,column;
printf("2.Enter the number of rows: ");
scanf("%d",&row);
printf("  Enter the number of columns: ");
scanf("%d",&column);
for(i=1;i<=row;i++)
{
    for(j=1;j<=row;j++)
    {
    if(i%2==0)
        {printf("1");}
        else
        {printf("0");}
    }
    printf("\n");
}
return 0;
}
int prob903(){
int i,j,row,column;
printf("3.Enter the number of rows: ");
scanf("%d",&row);
printf("  Enter the number of columns: ");
scanf("%d",&column);
for(i=1;i<=row;i++)
{
    for(j=1;j<=row;j++)
    {
    if(j%2==0)
        {printf("1");}
        else
        {printf("0");}
    }
    printf("\n");
}
return 0;
}
int prob904(){
int row, column, i, j;
    printf("4.Enter number of rows: ");
    scanf("%d", &row);
    printf("  Enter number of columns: ");
    scanf("%d", &column);

    for(i=1; i<=row; i++)
    {
    for(j=1; j<=column; j++)
    {
    if(i==1||i==row||j==1||j==column)
    {
    printf("1");
    }
    else
    {
    printf("0");
    }
    }
    printf("\n");
    }
return 0;
}
int prob905()
{
    int row, column, i, j;
    printf("5.Enter number of rows: ");
    scanf("%d", &row);
    printf("  Enter number of columns: ");
    scanf("%d", &column);
    for(i=1; i<=row; i++)
    {
    for(j=i; j< i+column; j++)
    {
    printf("%d", j);
    }
    printf("\n");
    }
    return 0;
}
int prob906()
{
int i,j,row;
printf("6.Enter the no of rows: ");
scanf("%d",&row);

for(i=1;i<=row;i++)
{
    for(j=1;j<=i;j++)
{
    printf("%d",j);
    }
    printf("\n");
}
return 0;
}
int prob907()
{
int i,j,n;
printf("7.Enter the no of rows: ");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
for(j=1;j<=n;j++)
{
if(j<i)
printf(" ");
else
printf("%d",j);
}
printf("\n");
}
return 0;
}
int prob9080909()
{
int i,j,n;
printf("8&9.Enter the no of rows: ");
scanf("%d",&n);

for(i=1;i<=n;i++)
{
    for(j=1;j<=n-i+1;j++)
    {
    printf("%d", j);
    }
printf("\n");
}
return 0;
}
int prob911()
{
int i,j,row;
printf("11.Enter the no of rows: ");
scanf("%d",&row);
for(i=1;i<=row;i++)
{
for(j=1;j<=i;j++)
{
    printf("%d",j);
}
for(j=i*2;j<row*2;j++)
{
    printf(" ");
}
for(j=i;j>=1;j--)
{
    printf("%d",j);
}
    printf("\n");
}
return 0;
}
int prob10()
{
    int n,rn,on,rm;
    printf("\nSolution 10.This is a program to check whether a number is palindrome or not\n");
    printf("Enter the number: ");
    scanf("%d",&n);
    on=n;
    while(n!=0){
        rm=n%10;
        rn=rn*10+rm;
        n/=10;
    }
    if (on!=rn)
       printf("%d is not a palindrome number",on);
    else
       printf("%d is a palindrome number",on);
 return 0;
}
int prob11()
{
    int i,n,result=1;
    printf("\nSolution 11.This is a program to calculate factorial of a number\n");
    printf("Press any number: ");
    scanf("%d",&n);
    if (n<1){
        printf("Factorial of negative numbers are undefined");
    }
    else {
    for (i=1;i<=n;++i)
    {
        result*=i;}
        printf("Factorial= %d" ,result);
    }
    return 0;
}
int prob12()
{
int i,n,f=0;
printf("\nSolution 12.This is a program to check whether a number is prime number or not\n");
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
int prob13()
{
    int i,n,x1=0,x2=1,nextnum;
    printf("\nSolution 13.This is a program to print Fibonacci series up to n terms\n");
    printf("Press any number: ");
    scanf("%d",&n);
    for (i=1; i<=n; ++i) {
    printf("%d ", x1);
    nextnum=x1+x2;
    x1=x2;
    x2=nextnum;
    }
    return 0;
}
void prob141()
{
int num;
    printf("\nSolution 14.1\n");
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
void prob142()
{
int num;
    printf("\nSolution 14.2\n");
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
    for (num; num!=4;){
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
void main()
{
    int n;
    printf("This is a program to see solution of every problem of task 6");
    printf("\n[For patterns in problem 9 type 9 and the pattern number inside together.Example: for 1.1 of 9 type 91,for 1.11 type 911.For problem 14 use same rule.]");
    while(n<=n){
    printf("\n\nEnter the number of problem: ");
    scanf("%d",&n);
    switch (n){
    case 1:
        prob1();
    break;
    case 2:
        prob2();
    break;
    case 3:
        prob3();
    break;
    case 4:
        prob4();
    break;
    case 5:
        prob5();
    break;
    case 6:
        prob6();
    break;
    case 7:
        prob7();
    break;
    case 8:
        prob8();
    break;
    case 91:
        prob901();
    break;
    case 92:
        prob902();
    break;
    case 93:
        prob903();
    break;
    case 94:
        prob904();
    break;
    case 95:
        prob905();
    break;
    case 96:
        prob906();
    break;
    case 97:
        prob907();
    break;
    case 98:
        prob9080909();
    break;
    case 99:
        prob9080909();
    break;
    case 911:
        prob911();
    break;
    case 10:
        prob10();
    break;
    case 11:
        prob11();
    break;
    case 12:
        prob12();
    break;
    case 13:
        prob13();
    break;
    case 141:
        prob141();
    break;
    case 142:
        prob142();
    break;
    default:
        printf("\nNo solution");}}
}
