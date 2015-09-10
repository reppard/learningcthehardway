#include <stdio.h>

int main()
{
  int array[] = {4,3,2,1};
  char string[] = {'4','3','2','1'};
  char strings[] = "1234";
  printf("--------------\n");
  printf("Sizes of types\n");
  printf("--------------\n");
  printf("int: %ld\n", sizeof(int));
  printf("double: %ld\n", sizeof(double));
  printf("float: %ld\n", sizeof(float));
  printf("char: %ld\n", sizeof(char));
  printf("char *: %ld\n", sizeof(char *));

  printf("array with 4 elms: %ld\n", sizeof(array));
  printf("char array with 4 elms: %ld\n", sizeof(string));
  printf("string lit array with 4 elms: %ld\n", sizeof(strings));

  printf("array with pointer math: %d\n", *(array));

  return 0;
}
