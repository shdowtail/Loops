/*Translate the FOR statement of Exercise 8 into an equivalent while statement.
 * You will need one statement in addition to the while loop itself*/

#include <stdio.h>

int for_initial (void)
{
  for (int i = 10; i >= 1; i /= 2)
    {
      printf ("FOR %d ", i++);
    }
  return 0;
}
int while_modified (void)
{
  int i = 10;
  while (i >= 1)
    {
      printf ("WHILE %d ", i++);
      i /= 2;

    }
  return 0;
}

int main (void)
{
  // for_initial();
  while_modified ();

  return 0;
}

//
// Created by konket on 05/10/2022.
//
