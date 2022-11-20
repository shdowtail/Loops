//
// Created by konke on 21.10.22.
//
/*Program prompts the user to enter dates in mm/dd/yy format. 
 *After the user enters 0/0/0 it calculates the farthest date and prints it out.
*/

#include <string.h>  //strtok, strcmp
#include <stdio.h>   //printf, scanf
#include <stdlib.h>  //strtol
#include <stdbool.h> //for flags

int main (void)
{
  bool first_iteration_flag;
  bool duplicate_flag;
  char str_date[9];
  char *str_date_exit_test = "0/0/0";
  char *str_day, *str_month, *str_year;
  char *end_ptr1, *end_ptr2, *end_ptr3;
  const char s[2] = "/";

  long day, month, year;
  int months_arr[50];
  int days_arr[50];
  int years_arr[50];
  int input_iteration_count;
  int biggest_year;
  int i;
  int i_duplicate_year;
  int i_initial_biggest_year;
  int comparison;
  input_iteration_count = 0;

  printf ("To exit setup type: 0/0/0\n");
  for (;;)
    {

      printf ("Enter date(mm/dd/yy)");
      scanf ("%8s", str_date);

      //tests if user input is equal to the exit condition which is "0/0/0"
      comparison = strcmp (str_date, str_date_exit_test);
      if (comparison == 0)
        {
          first_iteration_flag = true;

          goto breaker;
        }
      /*cuts a string into 3 tokens which represent mm/dd/yy respectively*/
      int count = 0;
      char *token;

      token = strtok (str_date, s);
      while (token != NULL)
        {
          if (count == 0)
            {
              str_month = token;
            }
          else if (count == 1)
            {
              str_day = token;
            }
          else if (count == 2)
            {
              str_year = token;
            }
          token = strtok (NULL, s);
          count++;
        }
      //converting strings to long
      month = strtol (str_month, &end_ptr1, 10);
      day = strtol (str_day, &end_ptr2, 10);
      year = strtol (str_year, &end_ptr3, 10);

      if (month <= 0 || month > 12 || day <= 0 || day > 31 || year < 0 || year > 99)
        {
          printf ("\nImpossible operation");
          continue;
        }
      months_arr[input_iteration_count] = (int) month;
      days_arr[input_iteration_count] = (int) day;
      years_arr[input_iteration_count] = (int) year;

      input_iteration_count++;

    }

  breaker://label to a while loop that finds the biggest year and it's duplicates.
  i = input_iteration_count - 1;
  while (i >= 0)
    {
      if (first_iteration_flag == true)
        {
          i_initial_biggest_year = i;
          biggest_year = years_arr[i];
          first_iteration_flag = false;
          --i;
        }
      if (years_arr[i] > biggest_year)
        {

          i_initial_biggest_year = i;
          biggest_year = years_arr[i];
          duplicate_flag = false;
        }
      if (biggest_year == years_arr[i])
        {

          i_duplicate_year = i;
          duplicate_flag = true;
        }

      i--;
    }

//"md" means "month day"

  if (duplicate_flag == true)
    {
      int dup_year_md_value = months_arr[i_duplicate_year] * 30 * days_arr[i_duplicate_year];
      int biggest_year_md_value = months_arr[i_initial_biggest_year] * 30 * days_arr[i_initial_biggest_year];
      if (dup_year_md_value > biggest_year_md_value)
        {
          printf ("\nFurthest date: %2d/%2d/%2d", months_arr[i_duplicate_year], days_arr[i_duplicate_year], years_arr[i_duplicate_year]);
        }
      else
        printf ("\nFurthest date: %2d/%2d/%2d", months_arr[i_initial_biggest_year], days_arr[i_initial_biggest_year], years_arr[i_initial_biggest_year]);
    }
  else
    printf ("\nFurthest date: %2d/%2d/%2d", months_arr[i_initial_biggest_year], days_arr[i_initial_biggest_year], years_arr[i_initial_biggest_year]);

  return 0;
}
