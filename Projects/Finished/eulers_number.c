#include <stdio.h>

//Given program calculates Euler's number "e";

int main (void)
{
  double e_add = 0;
  unsigned long n = 11;
  unsigned long n_index = 1;
  unsigned long factorial_value = 1;

  while (n_index != n)
    {
      double e_division;
      e_division = 1.0f / (double) factorial_value; // Calculates 1/n!
      factorial_value = n_index * factorial_value; // Calculates (n!)
      e_add += e_division; // Calculates 1 + 1/1! + 1/2! + 1/3! + ... 1/!n
      n_index++;
    }
  printf ("euler's number = %f", e_add);

  return 0;
}
