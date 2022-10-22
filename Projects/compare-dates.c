//
//
// Created by konke on 21.10.22.
//i'm tired, on god
//broken

#include <string.h>
#include<stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
int main (void)
{
  unsigned long day, month, year;
  int input_iteration_count;
  int saved_iteration;
  unsigned long biggest_year;
  char str_date[9];
  char *str_day, *str_month, *str_year;
  char *end_ptr1, *end_ptr2, *end_ptr3;
  const char s[2] = "/";
  bool flag;
  input_iteration_count = 0;
  unsigned long days_arr[50];
  unsigned long months_arr[50];
  unsigned long years_arr[50];

  char *exit_conditions = "0/0/0";
  for (;;)
	{

	  printf ("\nEnter date(mm/dd/yy)");
	  scanf ("%s", str_date);

	  if (*str_date == *exit_conditions)
		{
		  flag = true;

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
		  printf ("\ntoken : %s ", token);
		  token = strtok (NULL, s);
		  count++;
		}

	  month = strtoul (str_month, &end_ptr1, 10);
	  day = strtoul (str_day, &end_ptr2, 10);
	  year = strtoul (str_year, &end_ptr3, 10);

	  months_arr[input_iteration_count] = month;
	  days_arr[input_iteration_count] = day;
	  years_arr[input_iteration_count] = year;
	  input_iteration_count++;

	  saved_iteration = input_iteration_count;

	}
  int i;
  breaker:
  i = (int) saved_iteration;

  while (i > 0)
	{
	  if (flag == true)
		{
		  biggest_year = years_arr[i];
		  flag = false;
		  i--;
		}
	  if (years_arr[i] > biggest_year)
		{
		  biggest_year = years_arr[i];
		  printf ("\n2. biggest year: %lu", biggest_year);
		  i--;
		  printf ("\ni2: %d", i);
		}
	  else
		printf ("\n\nyears_arr[i]last: %lu\n biggest year last: %lu ", years_arr[i], biggest_year);
	  printf ("\ni3 : %ld", input_iteration_count);
	  i--;
	}

  return 0;

}
