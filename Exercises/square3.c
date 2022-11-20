/*Prints a table of squares using an odd method*/

#include <stdio.h>
int main (void)
{
  int i;
  int n;
  int odd;

  printf ("This program prints a table of squares.\n");
  printf ("Enter a number of entries in the table: ");
  scanf ("%d", &n);

  i = 1;
  odd = 3;
  for (int square = 1; i <= n; odd += 2)
    {
      printf ("%10d%10d\n", i, square);
      ++i;
      square += odd;
    }
  return 0;
}

//
// Created by konket on 05/10/2022.
//
