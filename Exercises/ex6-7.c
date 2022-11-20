/*Translate the program fragment of exercise 1 into a single FOR statement, same for exercise 2 fragment*/


#include <stdio.h>

int one_initial (void)
{
  int i = 1;
  while (i <= 128)
    {
      printf ("init.1. %d ", i);
      i *= 2;
    }
  return 0;
}
int one_for (void)
{
  for (int i = 1; i <= 128; i *= 2)
    {
      printf ("for.1. %d ", i);
    }
  return 0;
}

int two_initial (void)
{
  int i = 9384;
  do
    {
      printf ("init.2. %d ", i);
      i /= 10;
    }
  while (i > 0);
  return 0;
}

int two_for (void)
{
  for (int i = 9384; i > 0; i /= 10)
    {
      printf ("for.2. %d ", i);
    }
  return 0;
}

int main (void)
{
  one_initial ();
  printf ("\n");
  one_for ();
  printf ("\n\n");

  two_initial ();
  printf ("\n");
  two_for ();
  printf ("\n\n");

  return 0;
}

//
// Created by konket on 05/10/2022.
//
