/*find the error in the following program fragment and fit it*/
//it was just a semicolon after the if statement

#include <stdio.h>

int no_fix (int number)
{
  if (number % 2 == 0)
    {
      printf ("n is even\n");
    }
  else printf ("n is not even\n");
  return 0;
}

int main (void)
{
  int n;
  printf ("Enter n value");
  scanf ("%d", &n);

  no_fix (n);
}

//
// Created by konket on 06/10/2022.
//
