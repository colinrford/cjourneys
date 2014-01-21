#include <stdio.h>
#define MAXLINE 1000 // max input line size

/* Exercise 1-19: Write a function reverse(s) that reverses the character string s. Use it to write a program that reverses its input a line at a time. */

// my method is terrible
void reverse(char s[]);
int getlinefour(char s[], int lim);
void copy(char to[], char from[]);

main()
{
  int len;
  char line[MAXLINE]; // current input line
  char enil[MAXLINE]; // copied line

  while ((len = getlinefour(line, MAXLINE)) > 0)
  {
    copy(enil, line);
    reverse(enil);
    printf("%s", enil);
  }
  return 0;
}

/* getlinefour: read a line into s, return length */
int getlinefour(char s[], int lim)
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

/* This reverse method is very inefficient */
void reverse(char s[])
{
 int i, j;
 int size; // size of array

 i = 0;
 while (s[i] != '\0')
 {
   i++;
 }

 size = i;
 j = i;
 char rs[size];

 for (i = 0; i < size; i++)
 {
   if (s[j] == '\0')
     continue;
   else
     rs[i] = s[j];
   j--;
 }

 rs[i] = '\0';

 for (i = 0; i < size; i++)
 {
   s[i] = rs[i];
 }
}
