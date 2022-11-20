//
// Created by konke on 14.10.22.
//
/*displays a number with undefined amount of digits in reverse. Given number can have digits after decimal point*
* initially numbers are entered into and array as a string due to scanf not reporting errors with int
* Using long data types avoids rounding the final output.
* Decided to not return the value of float calculation due to rounding and conflicting data types
 * , converted it into a string using snprinf and printed it before returning the function.
* as a safety net added a stop which activates if the length of number_string is more than[100] because that would cause
* memory issues*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>
#define LEN 100

unsigned long long integer_from_string = 0;
unsigned long long float_from_string_int = 0;
long double float_from_string_actual = 0;
long double divisor;
long double total;
bool flag2;

unsigned long long number_string_into_number_actual (const char string[]);

int main (void)
{

  printf ("To exit the program type 'stop'");
  for (;;)
    {
      char number_string[LEN];

      printf ("\n\nEnter a number: ");
      scanf ("%99s", number_string);
      /*If combined ASCII value of input is 454 which is achieved by adding up letters s t o p or user inputs a ZERO "0"
       * or the input is longer than 100 digits, program stops to avoid memory issues.*/
      if (number_string[0] + number_string[1] + number_string[2] + number_string[3] == 454
          || strlen (number_string) > 100)
        {
          return 0;
        }

      long double int_final_value = number_string_into_number_actual (number_string);
      //flag2 is triggered by input that is anything other than numbers 1-9 and "."
      //or by the part of the function that calculates a float value
      if (flag2 == true)
        {
          goto breaker;//goto
        }

      printf ("int Given number backwards is: %Lg", int_final_value);


      /*resetting variables*/
    breaker:
    integer_from_string = 0;
      total = 0;
      float_from_string_int = 0;
      float_from_string_actual = 0;
      divisor = 0;

      flag2 = false;

    }

}
unsigned long long number_string_into_number_actual (const char string[])
{

  char total_value_string[LEN];
  int index = (int) (strlen (string)) - 1;
  int index_initial = 1;

  while (string[index] != '\0')
    {
      ++index_initial;
      if (string[index] == 46) //If entered value is float(has a dot)
        {

          --index;
          int count = 0;
          while (string[index] != '\0')
            {
              float_from_string_int = float_from_string_int * 10 + (string[index] - 48);

              index--;
              count++;
              index_initial++;

            }
          divisor = pow (10, count);
          float_from_string_actual = float_from_string_int / divisor;

          total = float_from_string_actual + integer_from_string;
          snprintf (total_value_string, index_initial, "%Lf", total);
          printf ("Given number backwards is: %s", total_value_string);
          flag2 = true;
          return 0;
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

  return
      integer_from_string;

}






