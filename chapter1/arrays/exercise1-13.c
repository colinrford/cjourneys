#include <stdio.h>

#define IN 1 // inside a word
#define OUT 0 // outside a word
#define WORDLEN 10 // maximum word length

/* write a program to print a histogram of the lengths of words in its input. It is easy to draw the histogram with the bars horizontal; a vertical orientation is more challenging. */

main()
{
    int c, i, j, k, lc, state;
    int wordlength[WORDLEN + 1];

    state = OUT;
    lc = 0;
    for (i = 0; i < WORDLEN; i++)
        wordlength[i] = 0;
    while ((c = getchar()) != EOF)
    {
        if (c == ' ' || c == '\n' || c == '\t')
        {
            state = OUT;
            if (lc == 0)
                continue;
            else if (lc < WORDLEN)
                wordlength[lc - 1]++;
            else if (lc >= WORDLEN)
                wordlength[WORDLEN]++;
            lc = 0;
        }
        else if (state == OUT)
        {
            state = IN;
        }
        if (state == IN)
        {
            ++lc;
        }
    }
    for (i = 0; i < WORDLEN; i++)
    {
        printf("%d:", i + 1);
        if (wordlength[i] != 0)
        {
            for (j = 0; j < wordlength[i]; j++)
            {
                printf("*");
            }
        }
        printf("\n");
    }
}
