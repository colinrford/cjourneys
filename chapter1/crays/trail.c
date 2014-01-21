#include <stdio.h>
#define MAXLINE 1000 // max line input size

/* Exercise 1-18: Write a program to remove trailing blanks and tabs from each line of input, and to delete entirely blank lines. */

main()
{
  int len; // current line length
  int max; // maximum length seen so far
  char line[MAXLINE]; // current input line
  char longest[MAXLINE]; // longest line saved here

  max = 0;
  while ((len = getline(line, MAXLINE)) > 0)
  {
    if (len > max)
    {
      max = len;
      copy(longest, line);
    }
  }
  if (max > 0) // there was a line
  {
    printf("%s", longest);
  }
  return 0;
}

/* l;askdf */

