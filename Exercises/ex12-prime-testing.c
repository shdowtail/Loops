/* this loop isn't very efficient. It's not necessary to divide 'n' by all numbers between 2 and n-1
 * to determine whether it's prime. We only need to check divisors up to the square root of n.
 * Modify the loop to take advantage of this fact
 * Hint: Don't try to compute square root of n; instead, compare d * d with n */

#include <stdio.h>

int initial (int number)
{
  //'n' is the number being checked
  int d;

  for (d = 2; d < number; d++)
    {
      if (number % d == 0)
        {
          break;
        }
    }

  if (d < number)
    {
      printf ("%d is divisible by %d\n", number, d);
    }
  else
    printf ("%d is prime\n", number);

  return 0;
}

int simplified (int number)
{
  int d;

  for (d = 2; d < number * number; ++d)
    {
      if (number % d == 0)
        {
          break;
        }
    }
  if (d < number)
    {
      printf ("%d is divisible by %d\n", number, d);
    }
  else
    printf ("%d is prime\n", number);
  return 0;
}

int main (void)
{
  int n;
  printf ("Enter number: ");
  scanf ("%d", &n);
  initial (n);
  printf ("\n\n");
  simplified (n);
}
