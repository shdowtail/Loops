//
// Created by konke on 19.10.22.
//
/* Rearrange the square3.c program so that the for loop initializes i, tests i, and increments i.
 * Don't use multiplications */

#include <stdio.h>
int main(void)
{
  int i;
  int n;
  int odd;


  //printf("This program prints a table of squares.\n");
  //printf("Enter a number of entries in the table: ");
  //scanf("%d", &n);

  n = 10;
  i = 1;
  odd = 3;
  for (int square = 1; i <= n; ++i )
	{
	  printf("%10d%10d\n", i, square);
	  square += odd;
	  odd += 2;
	}
  return 0;
}


