#include <stdio.h>

/* Write a program to copy its input to its output, replacing each string of oneor more blanks by a single blank */

main()
{
	int c, count;

	count = 0;
	while ((c = getchar()) != EOF)
	{
		if (c == ' ')
		{		
			++count;
			if (count > 1)
			{
				c = '\0';
				count = 1;
			}
		}
		else
			count = 0;
		putchar(c);
	}
}
