//
// Created by konket on 08/10/2022.
//
/*write a program that finds the largest in a series of numbers entered by the user.
 * The program must prompt the user to enter numbers one by one.
 * When the user enters 0 or a negative number, the program must display the largest non-negative number entered.*/
#include <stdio.h>
#include <math.h>
#include <stdbool.h>

double float_value = 0;
double largest00;
double largest01;
int int_value = 0;

int strToIntOrFloat (const char number_string_to_int[100])
{
  double divisor;
  int i = 0;
  int sum_f = 0;

  while (number_string_to_int[i] != '\0')
    {

      if (number_string_to_int[i] == 46) /* If input is float then program goes here after finding the dot */
        {
          ++i;

          while (number_string_to_int[i] != '\0')
            {
              sum_f = sum_f * 10 + (number_string_to_int[i] - 48);
              i++;
            }
          double sum_f_f = sum_f; /*conversion into double, might be unnecessary*/
          divisor = pow (10, count);
          float_value = sum_f_f / divisor;

          return 0;
        }

      else
        {
          int_value = int_value * 10 + (number_string_to_int[i] - 48);
          i++;
        }
    }

  /*im aware that I don't use this return value but jetbrains kept annoying me about it only returning zeros*/
  return int_value;

}

int main (void)
{

  bool flag;
  char number_string[100]; /*initial character array for user input*/
  for (int i = 0; i >= 0; ++i)
    {


      /*pointers to end values of sub-program int and float conversions*/
      double *ptrflt = &float_value;
      int *ptrint = &int_value;

      printf ("\nEnter a number: ");
      scanf ("%99s", number_string);
      /*function to convert a string into int or float*/
      strToIntOrFloat (number_string);
      /*double because it rounds up the end result*/
      double total_value = *ptrflt + *ptrint;
      if (total_value == 0 || total_value < 0)
        {
          printf ("The largest number entered was: %g", largest00);
          return 0;
        }

      /*compares two then keeps the larger one*/
      if (i != 0)
        {
          largest01 = total_value;
          flag = true;
        }
      if (i == 0)
        {
          largest00 = total_value;
        }
      if (flag == true)
        {
          if (largest01 > largest00)
            {
              largest00 = largest01;
            }
          else
            {
              largest01 = 0;
            }
          flag = false;

        }
      /*resetting pointer values*/
      float_value = 0;
      int_value = 0;

    }
  return 0;
}







