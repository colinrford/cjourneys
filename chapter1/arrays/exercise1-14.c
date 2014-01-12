#include <stdio.h>

#define MAXCHARNUM 256 // max number of characters in ASCII

/* Write a program to print a histogram of the frequencies of different characters in its input */

main()
{
  int c, i, j;
  int characters[MAXCHARNUM]; // ASCII

  for (i = 0; i < MAXCHARNUM; i++)
  {
    characters[i] = 0;
  }

  while ((c = getchar()) != EOF)
  {
    characters[c]++;
  }

  for (i = 0; i < MAXCHARNUM; i++)
  {
    if (characters[i] != 0)
    {
      printf("%c: ", i);
      for (j = 0; j < characters[i]; j++)
      {
        printf("*");
      }
      printf("\n");
    }
  }
}
