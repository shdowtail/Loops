//
// Created by konket on 09/10/2022.
//


#include <stdio.h>
#include <math.h>

int strToIntOrFloat (const char number_string_to_int[100])
{
  double float_value;
  double divisor;
  int i = 0;
  int sum = 0;
  int sum_f = 0;

  while (number_string_to_int[i] != '\0')
    {
      if (number_string_to_int[i] == 46) //If entered value is float
        {
          ++i;

          while (number_string_to_int[i] != '\0')
            {
              sum_f = sum_f * 10 + (number_string_to_int[i] - 48);
              printf ("\nsum_f = %d", sum_f);
              printf ("\n i = %d", i);
              printf ("\n count = %d", count);

              i++;
            }
          double sum_f_f = sum_f;
          divisor = pow (10, count);
          float_value = sum_f_f / divisor;
          printf ("total value =  %g", float_value + sum);
          break;

        }
      if (number_string_to_int[i] < 48 || number_string_to_int[i] > 57)  //error message
        {
          printf ("Unable to convert into a integer numeric value");
        }
      else
        {
          sum = sum * 10 + (number_string_to_int[i] - 48);
          i++;
          printf ("\nsum = %d", sum);
        }
    }

  return sum;

}
