//program to demonstrate dangling pointers in C.
#include<stdio.h>
#include<stdlib.h>
int main()
{
   int *a;
   a=(int*)malloc(sizeof(int));
   *a=50;
   printf("Before Free : %d\n",*a);
   free(a);
   printf("After free : %d\n",*a);
   printf("Dangling pointer\n");
   return 0;
}
