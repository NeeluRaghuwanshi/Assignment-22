//function to input variable length string and store it in an array without
//memory wastage.
#include<stdio.h>
#include<stdlib.h>
int main()
{
  char *s,c;
  int i=0,j=1;
  s=(char*)malloc(sizeof(char));
  printf("Enter a stirng : ");
  while(c != '\n')
  {
    c=getc(stdin);
    j++;
    s=(char*)realloc(s,j*sizeof(char));
    s[i]=c;
    i++;
  }
  s[i]='\0';
  printf("String is : %s",s);
  free(s);
  return 0;
}
