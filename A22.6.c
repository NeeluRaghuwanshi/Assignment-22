//program in C to find the largest element using Dynamic Memory Allocation.
#include<stdio.h>
#include<stdlib.h>
int main()
{
     int *a,n=0,largest,i;
    printf("Enter the number of values : ");
    scanf("%d",&n);
    a=(int*)calloc(n,sizeof(int));
    if(a==NULL)
    {
     printf("Memory allocation failed\n");
     return 0;
    }
    printf("Enter %d values : ",n);
    for(i=0;i<n;i++)
    {
      scanf("%d",a+i);
    }
    largest=a[0];
    for(i=0;i<n;i++)
    {
       if(largest<a[i])
          largest=a[i];

    }
    printf("%d is largest\n",largest);
    free(a);
    return 0;

}
