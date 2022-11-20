#include <stdio.h>
// C is different?
// output is same but since DO statement evaluates the expression after execution then it must be the "odd one out"
int a (void)
{
  int i = 0;
  while (i < 10)
    {
      printf ("a.%d ", i++);
    }
  return 0;
}

int b (void)
{
  int i = 0;
  for (; i < 10;)
    {
      printf ("b.%d ", i++);

    }
  return 0;
}

int c (void)
{
  int i = 0;
  do
    {
      printf ("c.%d ", i++);

    }
  while (i < 10);

  return 0;
}

int main (void)
{
  a ();
  printf ("\n\n");
  b ();
  printf ("\n\n");
  c ();
}


//
// Created by konket on 05/10/2022.
//
