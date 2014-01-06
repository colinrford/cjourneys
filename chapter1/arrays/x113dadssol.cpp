// adds number of characters on the line before the histogram display

#include "stdafx.h"

int _tmain(int argc, _TCHAR* argv[])
{
	int wcount [100], ccount = 0, x, y;
	char ch;
	
	printf("\n");
	printf("beginning evaluation\0");
	printf("\n\n");

	for (x = 0; x < 100; x++)
	{
		wcount[x] = 0;
	}

	while ((ch = getchar()) != EOF)
	{
		if ((ch >= 65 && ch <= 90) || (ch >= 97 && ch <= 122))
		{
			ccount++;
		}
		else
		{
			wcount[ccount]++;
		    ccount = 0;
		}
	}

	for (x = 1; x <= 20; x++)
	{
		putchar(48 + (x / 10));
		putchar(48 + (x % 10));
		putchar(' ');

		for (y = 0; y < wcount[x]; y++)
		{
			putchar('*');
		}
		printf("\n");
	}

	return 0;
}
