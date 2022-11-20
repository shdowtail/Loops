//
// Created by konke on 14.10.22.
//

/*user is able to enter several values of a trade and get commission calculated for each one
 * after giving 0(zero) as an input program shuts down*/


#include<stdio.h>
float commission_calc (float);

int main (void)
{
  float value;
  for (;;)
    {
      printf ("\nEnter a value of trade: ");
      scanf ("%f", &value);
      if (value == 0)
        {
          printf ("\nSession ended");
          return 0;
        }
      float commission = commission_calc (value);
      printf ("\ncommission = %.2f", commission);

    }
}

float commission_calc (float value_)
{
  float commission_ = 0;
  if (value_ < 2500.00f)
    commission_ = 30.00f + .017f * value_;
  else if (value_ < 6250.00f)
    commission_ = 56.00f + .0066f * value_;
  else if (value_ < 20000.00f)
    commission_ = 76.00f + .0034f * value_;
  else if (value_ < 50000.00f)
    commission_ = 100.00f + .0022f * value_;
  else if (value_ < 500000.00f)
    commission_ = 155.00f + .0011f * value_;
  else
    commission_ = 255.00f + .0009f * value_;

  if (commission_ < 39.00f)
    commission_ = 39.00f;

  return commission_;
}