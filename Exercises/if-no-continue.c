#include <stdio.h>

int main (void)
{
  int n, i, sum;
  n = 0;
  sum = 0;
  while (n < 10)
    {
      scanf ("%d", &i);
      if (i != 0)
        {
          sum += i;
          n++;
        }
    }
}

//
// Created by konket on 05/10/2022.
//
