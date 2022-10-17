//
// Created by konke on 14.10.22.
//
/*displays a number with undefined amount of digits in reverse. Given number can be a float*/
/*you could say it works but if you for example enter 1452.214 the output is going to be 412.254 due to rounding
 *I'll try figuring that out later */

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>

bool flag;
bool flag2;
int integer_from_string = 0;
int float_from_string_int = 0;
double float_from_string_actual = 0.0f;
double divisor;
double total;


double number_string_into_number_double (const char string[]);

int main (void)
{
  printf ("To exit the program type ''stop''");
  for (;;)
	{
	  char number_string[100];

	  printf ("\n\n Enter a number: ");
	  scanf ("%s", number_string);
	  //If combined ASCII value of input is 454 which is achieved by adding up letters s t o p program stops
	  if (number_string[0] + number_string[1] + number_string[2] + number_string[3] == 454)
		{
		  return 0;
		}
	  double final_value = number_string_into_number_double (number_string);
	  if (flag2 == true)
		{
		  goto breaker;
		}

	  printf ("\nGiven number backwards is: %g", final_value);

	  /*resetting variables*/
	breaker:
	integer_from_string = 0;
	  total = 0;
	  float_from_string_int = 0;
	  float_from_string_actual = 0;
	  flag = false;
	  flag2 = false;

	}

}
double number_string_into_number_double (const char string[])
{

  int index = (int) (strlen (string)) - 1;

  while (string[index] != '\0')
	{
	  if (string[index] == 46) //If entered value is float(has a dot)
		{
		  flag = true;
		  --index;
		  int count = 0;
		  while (string[index] != '\0')
			{
			  float_from_string_int = float_from_string_int * 10 + (string[index] - 48);

			  index--;
			  count++;

			}

		  divisor = pow (10, count);
		  float_from_string_actual = float_from_string_int / divisor;
		  double converted_integer_from_string = integer_from_string;

		  total = float_from_string_actual + converted_integer_from_string;

		  break;
		}

	  if (string[index] < 48
		  || string[index] > 57) // if strings ASCII value is less than 48 and higher than 57(not a number)
		{
		  printf ("\nImpossible operation");
		  flag2 = true;

		  return 0;
		}
	  else
		{
		  integer_from_string = integer_from_string * 10 + (string[index] - 48);
		  /*if string[index] == 4 then first iteration would be: 4 * 10 + (49 - 52) initial zero of int_from_str
		   * * 10 + (ascii value of a given number - the smallest ASCII value of a number aka value of a '0')*/
		  index--;
		}

	}
  if (flag == true)
	{
	  return total;
	}
  else;

  return
	  integer_from_string;

}






