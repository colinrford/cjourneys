#include <stdio.h>
#define MAXLINE 1000 // maximum input line size

/* Exercise 1-17: Write a program to print all input lines that are longer than 80 characters. */

int getlinethree(char line[], int maxline);

/* print input lines longer than 80 characters */
main()
{
  int len;  // current line length
  char line[MAXLINE]; // current input line

  while ((len = getlinethree(line, MAXLINE)) > 0)
  {
    if (len > 80)
    {
      printf("%s", line);
    }
  }

  return 0;
}

/* getlinethree: read a line into s, return length */
int getlinethree(char s[], int lim)
{
  int c, i;

  for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; i++)
  {
    s[i] = c;
  }
  if (c == '\n')
  {
    s[i] = c;
    i++;
  }
  s[i] = '\0';
  return i;
}
