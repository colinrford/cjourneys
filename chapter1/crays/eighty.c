#include <stdio.h>
#define MAXLINE 1000 // maximum input line size

/* Exercise 1-17: Write a program to print all input lines that are longer than 80 characters. */

int getlinethree(char line[], int maxline);
void copy(char to[], char from[]);

/* print input lines longer than 80 characters */
main()
{
  int len;  // current line length
  int max; // maximum length seen so far
  char line[MAXLINE]; // current input line
  char eighty[MAXLINE]; // lines longer than 80

  max = 80;
  while ((len = getlinethree(line, MAXLINE)) > 0)
  {
    if (len > max)
    {
      max = len;
      copy(eighty, line);
    }
  }
  if (max > 80) // there was a line
  {
    printf("%s", eighty);
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

/* copy: copy 'from' into 'to'; assume to is big enough */
void copy(char to[], char from[])
{
  int i;

  i = 0;
  while ((to[i] = from[i]) != '\0')
  {
    i++;
  }
}
