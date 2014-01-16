#include <stdio.h>

/* Exercise 1-15 - rewrite the temperature conversion program of section 1.2 to use a function for conversion.
 * print Fahrenheit-Celsius table for fahr = 0, 20, ..., 300 */

float conversion(float f);

main()
{
  float fahr;

  printf("F\tC\n"); // not-so-great heading
  printf("----------\n");

  for (fahr = 0; fahr <= 300; fahr += 20)
  {
    printf("%3.0f %6.1f\n", fahr, conversion(fahr));
  }

  return 0;
}

float conversion(float fahr)
{
  float celsius;

  celsius = (5.0/9.0) * (fahr - 32.0);
  
  return celsius;
}
