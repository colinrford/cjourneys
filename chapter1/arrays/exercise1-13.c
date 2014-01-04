#include <stdio.h>

#define IN 1 // inside a word
#define OUT 0 // outside a word
#define WORDLEN 10 // maximum word length

/* write a program to print a histogram of the lengths of words in its input. It is easy to draw the histogram with the bars horizontal; a vertical orientation is more challenging. */

main()
{
  int c, i, j, nw, lc, state;
  int wordlength[WORDLEN + 1];

  state = OUT;
  nw = lc = 0;
  for (i = 0; i < WORDLEN; ++i)
    wordlength[i] = 0;
  while ((c = getchar()) != EOF)
  {
    if (c == ' ' || c == '\n' || c == '\t')
    {
      state = OUT;
    }
    else if (state == OUT)
    {
      state = IN;
      ++nw;
    }
    if (state == IN)
    {
      ++lc;
      if (lc <= WORDLEN)
        ++wordlength[lc];
      else if (lc > WORDLEN)
        ++wordlength[10];
    }
  }
  for (j = 0; j <= WORDLEN; ++j)
  {
    int k = 0;
    printf("%d:", (j + 1));
    while (k <= wordlength[j])
    {
      printf("*");
      ++k;
    }
    printf("\n");
  }
}
