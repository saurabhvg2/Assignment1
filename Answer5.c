#include <stdio.h>
#include <string.h>
int main()
{
  char a[100];
  int length;

  printf("Enter the string here\n");
  gets(a);

  length = strlen(a);

  printf("Length of the string = %d", length);

  return 0;
}