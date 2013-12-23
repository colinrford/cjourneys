#include <stdio.h>
#define LOWER 0   // lower limit of table
#define UPPER 300 // upper limit
#define STEP  20  // step size

// Exercise 1-5

/* prints Fahrenheit-Celsius table from fahr = 300, 280, ..., 0 */

main()
{
  int fahr;
  
  printf("F\tC\n");
  printf("---------\n");

  for(fahr = UPPER; fahr >= LOWER; fahr = fahr - STEP)
  {
    printf("%3d %6.1f\n", fahr, (5.0/9.0)*(fahr-32.0));
  }
}
