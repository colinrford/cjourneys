#include <stdio.h>

#define MAXCHARNUM 256 // max number of characters in ASCII

/* Write a program to print a histogram of the frequencies of different characters in its input */

main()
{
  int c, i, j;
  int characters[MAXCHARNUM + 1]; // if in other character sets

  while ((c = getchar()) != EOF)
  {
    characters[c]++;
  }

  for (i = 0; i < MAXCHARNUM; i++)
  {
    printf("%d: ", i);
    if (characters[i] != 0)
    {
      for (j = 0; j < characters[i]; j++)
      {
        printf("*");
      }
    }
    printf("\n");
  }
}
