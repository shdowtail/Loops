//
// Created by konke on 14.10.22.
//
/*displays a string with undefined amount of digits in reverse*/
//broken
#include <stdio.h>
#include <string.h>
#include <math.h>

int integer_from_string = 0;
int float_from_string_int = 0;
double float_from_string_actual = 0.0f;
double divisor;

int stringToInteger (const char string[])
{
  int index = (int)strlen (string) - 1;

  while (string[index] != '\0')
	{
	  int count = 0;
	  if (string[index] == 46) //If entered value is float
		{
		  ++index;

		  while (string[index] != '\0')
			{

			  float_from_string_int = float_from_string_int * 10 + (string[index] - 48);
			  printf ("\n = %d", float_from_string_int);
			  printf ("\n i = %d", index);
			  printf ("\n count = %d", count);

			  index++;
			  count++;
			}
		  //double _f_float_from_string = float_from_string_int;
		  divisor = pow(10, count);
		  float_from_string_actual = float_from_string_int / divisor;
		  printf ("\ntotal value =  %g", float_from_string_actual + integer_from_string);
		  break;

		}

	  if (string[index] < 48
		  || string[index] > 57) // if strings ASCII value is less than 48 and higher than 57(not a number)
		{
		  printf ("\nImpossible operation");
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
  return
	  integer_from_string;

}

int main (void)
{
  for (;;)
	{

	  int integer_value;
	  char number_string[100];

	  printf ("\n Enter an integer: ");
	  scanf ("%s", number_string);

	  integer_value = stringToInteger (number_string);

	  printf ("\n Equivalent integer value: %d", integer_value);

	  integer_value = 0;
	  integer_from_string = 0;
	  return 0;
	}
}






