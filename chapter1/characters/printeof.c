#include <stdio.h>

/* Exercise 1-7: Write a program to print the value of EOF */

main()
{
  int c;

  while((c = getchar()) != EOF)
  {
    printf("%d\n", EOF);
    putchar(c);
  }
}
