//
// Created by konke on 14.10.22.
//

/*modify original broker.c program from section 5.2 so that the user could enter more than one trade and the program
 * will calculate the commission of each.*/
//broken

#include<stdio.h>
float commission_calc(float );

int main (void)
{
  float value;

  printf ("Enter a value of trade: ");
  scanf ("%f", &value);
  float commission = commission_calc (value);
  printf ("\ncommission = %.2f", commission);
}

 float commission_calc(float value_)
 {
  float commission_;
  if(value_ < 2500.00f)
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

  if(commission_ < 39.00f)
	commission_ = 39.00f;

   return commission_calc (commission_);
 }