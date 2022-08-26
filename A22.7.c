//program to demonstrate memory leak in C.
#include<stdio.h>
#include<stdlib.h>
int main()
{
   int *a;
   a=(int*)malloc(sizeof(int));
   a=NULL;
   return 0;
}
