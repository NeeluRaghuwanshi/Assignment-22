//program to read a one dimensional array, print sum of all elements along with
//inputted array elements using dynamic memory allocation.
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *a,n=0,sum=0,i;
    printf("Enter the number of values : ");
    scanf("%d",&n);
    a=(int*)malloc(n*sizeof(int));
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
    printf("Sum of : ");
    for(i=0;i<n;i++)
    printf("%d ",*(a+i));
    printf("is : %d",sum);
    free(a);
    return 0;

}
