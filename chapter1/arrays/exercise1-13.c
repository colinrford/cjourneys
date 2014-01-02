#include <stdio.h>

#define IN 1 // inside a word
#define OUT 0 // outside a word

/* write a program to print a histogram of the lengths of words in its input. It is easy to draw the histogram with the bars horizontal; a vertical orientation is more challenging. */

main()
{
  int c, i, nw, lc, state;

  state = OUT;
  nw = lc = 0;
  while ((c = getchar()) != EOF)
  {
    if (state == IN)
    {
      printf("*");
    }
      if (c == ' ' || c == '\n' || c == '\t')
    {
      state = OUT;
      printf("\n");
    }
    else if (state == OUT)
    {
      state = IN;
      ++nw;
      printf("%d: ", nw);
    }
  }
  int wordlength[nw];
  for (i = 0; i < nw; ++i)
    wordlength[i] = 0;
}
