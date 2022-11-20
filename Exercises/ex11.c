/* what output does the following program fragment produce?*/
/* initial answer: 1 2 4 16 32 64 128*/ //++
#include <stdio.h>

int main (void)
{
  int i = 1;
  while (i <= 128)
    {
      printf ("%d ", i);
      i *= 2;
    }
  return 0;
}

//
// Created by konket on 06/10/2022.
//
