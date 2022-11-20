/* enter two numbers, then find their greatest common divisor. Numbers shouldn't necessarily be integers*/
#include <stdio.h>

int gcd (int a, int b);

int main (void)
{
  int a_user_input = 0;
  int b_user_input = 0;
  printf ("\nEnter two integers: ");
  scanf ("%d %d", &a_user_input, &b_user_input);

  if (b_user_input > a_user_input)
    {
      i int holder;
      holder = a_user_input;
      a_user_input = b_user_input;
      b_user_input = holder;
      gcd (a_user_input, b_user_input);
    }
  else
    gcd (a_user_input, b_user_input);
}

int gcd (int a, int b)
{
  while (b > 0)
    {
      int quotient = a / b;
      int remainder = a - quotient * b;
      a = b;
      b = remainder;

    }
  printf ("\nGCD is: %d", a);
  return 0;
}
