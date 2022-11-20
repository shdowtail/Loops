//
// Created by konke on 14.10.22.
//
#include <stdio.h>

int gcd (int a, int b)
{
  if (b == 0)
    return a;
  else
    return gcd (b, a % b);

}