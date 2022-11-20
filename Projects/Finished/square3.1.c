//
// Created by konke on 19.10.22.
//
/* Rearrange the square3.c program so that the for loop initializes i, tests i, and increments i.
 * Don't use multiplications */

#include <stdio.h>
int main (void)
{

  int n;
  int odd;
  int square;
  //printf("This program prints a table of squares.\n");
  //printf("Enter a number of entries in the table: ");
  //scanf("%d", &n);

  n = 10;
  odd = 3;
  square = 1;

  for (int i = 1; i <= n; ++i)
    {
      printf ("%10d%10d\n", i, square);
      square += odd;
      odd += 2;
    }
  return 0;
}


