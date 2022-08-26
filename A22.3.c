//calculate the sum of n numbers entered by the user using malloc
//and free
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
    printf("Sum is : %d",sum);
    free(a);
    return 0;

}
