//program to input and print text using dynamic memory allocation.
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i, n;
    char *text;

    printf("Enter maximum number of characters for your text : ");
    scanf("%d", &n);

    text = (char *)malloc(n * sizeof(char));
    if (text == NULL) {
        printf("\nMemory Allocation failed.");
        return 0;;
    }
    fflush(stdin);
    printf("\nEnter your text: ");
    fgets(text,n,stdin);

    printf("\nText is : %s", text);
    free(text);

    return 0;
}
