//
// Created by konke on 14.10.22.
// Enter a fraction, then reduce the fraction to the lowest terms
//


#include <stdio.h>

int gcd (int a, int b);

int main (void)
{
  int a_num, b_num;
  int a_num_post, b_num_post;

  printf ("\nEnter a fraction xx/xx :");
  scanf ("%d/%d", &b_num, &a_num);
  int greatest_common_divisor = gcd (a_num, b_num);
  a_num_post = a_num / greatest_common_divisor;
  b_num_post = b_num / greatest_common_divisor;
  printf ("In lowest terms: %d/%d", b_num_post, a_num_post);

  return 0;
}
int gcd (int a, int b)
{
  if (b == 0)
    return a;
  else
    return gcd (b, a % b);

}
