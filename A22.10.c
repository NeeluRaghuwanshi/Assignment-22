//maximum and minimum from an array using dynamic memory allocation
#include<stdio.h>
#include<stdlib.h>
int main()
{
     int *a,n=0,max,min,i;
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
    max=a[0];
    for(i=0;i<n;i++)
    {
       if(max<a[i])
          max=a[i];

    }

    printf("%d is maximum\n",max);

    min=a[0];
    for(i=0;i<n;i++)
    {
       if(min>a[i])
          min=a[i];

    }
    printf("%d is minimum\n",min);
    free(a);
    return 0;

}
