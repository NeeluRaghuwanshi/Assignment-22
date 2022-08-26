//program to ask the user to input a number of data values he would like to
//enter then create an array dynamically to accommodate the data values. Now take
//the input from the user and display the average of data values.
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *a,n=0,sum=0,i;
    printf("Enter the number of values : ");
    scanf("%d",&n);
    a=(int*)calloc(n,sizeof(int));
    if(a==NULL)
    {
     printf("Memory allocation failed\n");
     return 0;
    }
    printf("Enter %d values : \n",n);
    for(i=0;i<n;i++)
    {
      scanf("%d",a+i);
    }
    for(i=0;i<n;i++)
    {
      sum += *(a+i);
    }
    printf("Average is : %d",sum/n);
    free(a);
    return 0;

}
