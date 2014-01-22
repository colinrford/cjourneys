#include <stdio.h>
#define MAXLINE 1000 // max line input size

/* Exercise 1-18: Write a program to remove trailing blanks and tabs from each line of input, and to delete entirely blank lines. */
int getlinefour(char s[], int lim);

main()
{
  int len; // current line length
  char line[MAXLINE]; // current input line

  len = getlinefour(line, MAXLINE);  
  
  printf("%s", line);

  return 0;
}

/* getlinefour: real dumb name for this thing */
int getlinefour(char s[], int lim)
{
  int c, i;

  for (i = 0; i < lim - 1 && (c = getchar()) != EOF; i++)
  {
    if (s[i - 1] == c == '\t' || s[i - 1] == c == '\n' || s[i - 1] == c == ' ')
      continue;
  
    else
      s[i] = c;
  }
  
  s[i] = '\0';
  
  return i;
}
