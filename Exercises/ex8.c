/*what output does the following for statement produce?*/
/*1st =10 2nd =6 3rd =4 4th =3 5th =1 ~~~~~ endless, nice */
#include <stdio.h>

int main (void)
{
  for (int i = 10; i >= 1; i /= 2)
    {
      printf ("%d ", i++);
    }
  return 0;
}
//
// Created by konket on 05/10/2022.
//
