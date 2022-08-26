//program to allocate memory dynamically of the size in bytes entered by the
//user. Also handle the case when memory allocation is failed.
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n;
    void *p;

    printf("Enter how many bytes you need: ");
    scanf("%d", &n);

    p = malloc(n);
    if (p == NULL)
    {
        printf("Memory allocation failed\n");
    }
     else
     {
        printf("%d bytes allocated successfully\n", n);
     }

    free(p);
    return 0;
}
