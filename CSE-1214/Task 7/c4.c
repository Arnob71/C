#include<stdio.h>
void main()
{
	int arr[10], FreqArr[10], i, j, Count, Size;
    printf("This is a program to count the frequency of each element of an array");
	printf("\nEnter the number of elements in an array: ");
	scanf("%d", &Size);

	printf("Enter the array values: ");
	for (i=0;i<Size;i++)
	{
      scanf("%d", &arr[i]);
      FreqArr[i]= -1;
   	}

	for (i=0;i<Size;i++)
	{
    Count= 1;
      for(j= i+1;j<Size;j++)
      {
        if(arr[i] == arr[j])
        {
          Count++;
          FreqArr[j] = 0;
        }
      }
      if(FreqArr[i] != 0)
      {
        FreqArr[i] = Count;
      }
	}
    printf("The frequency of all elements in this array:\n");
 	for (i=0;i<Size;i++)
  	{
      if(FreqArr[i]!= 0)
      {
        printf("%d Occurs %d Times \n", arr[i], FreqArr[i]);
      }
  	}
}
