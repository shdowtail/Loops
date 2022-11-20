//
// Created by konke on 20.10.22.
//
/* Program calculates the remaining loan balance after each month up to the amount of months defined by the user*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool flag;
char *assigned_suffix;

/*finds the appropriate suffix for a given month*/
void num_suffix (long month_index_up)
{

  int i = 0;
  char num_str[3];

  sprintf (num_str, "%ld", month_index_up);

  while (num_str[i] != '\0')
    {
      ++i;
    }
  --i;
  if (num_str[i - 1] == 49 && num_str[i] == 49
      || num_str[i - 1] == 49 && num_str[i] == 50
      || num_str[i - 1] == 49 && num_str[i] == 51
      || num_str[i] >= 52 && num_str[i] <= 57)
    {
      assigned_suffix = "th";
    }
  else if (num_str[i] == 49)
    {
      assigned_suffix = "st";
    }

  else if (num_str[i] == 50)
    {
      assigned_suffix = "nd";
    }
  else if (num_str[i] == 51)
    {
      assigned_suffix = "rd";
    }
}

int main (void)
{

  char str_amount[12];
  char *ptr1;
  char str_annual_interest_percent[3];
  char *ptr2;
  char str_monthly_payment[5];
  char *ptr3;
  char str_requested_number_of_months[4];
  char *ptr4;

  long double amount;
  long double annual_interest_percent;

  unsigned long requested_number_of_months;
  unsigned long nr_months_index;

/*User is prompted to enter needed values then the string input is converted to an according decimal format*/
  printf ("\nEnter the amount of loan: ");
  scanf ("%11s", str_amount);

  amount = strtold (str_amount, &ptr1);

  printf ("Enter the interest rate: ");
  scanf ("%2s", str_annual_interest_percent);

  annual_interest_percent = strtold (str_annual_interest_percent, &ptr2);

  printf ("Enter the monthly payment: ");
  scanf ("%3s", str_monthly_payment);

  long double monthly_payment;
  monthly_payment = strtold (str_monthly_payment, &ptr3);

  printf ("Enter the number of months: ");
  scanf ("%3s", str_requested_number_of_months);

  requested_number_of_months = strtoul (str_requested_number_of_months, &ptr4, 10);

  nr_months_index = requested_number_of_months; /*This variable is used to skim through prompted amount of months*/

  long month_upCount_index = 1;
  /* The main calculation of remaining balance*/
  monthly_interest_rate = annual_interest_percent / 100 / 12;
  while (nr_months_index > 0)
    {
      long double monthly_calculation;
      long double remaining_amount;
      long double monthly_interest_payment;
      long double monthly_non_interest_payment;

      monthly_interest_payment = amount * monthly_interest_rate;

      monthly_non_interest_payment = monthly_payment - monthly_interest_payment;

      monthly_calculation = monthly_non_interest_payment + monthly_interest_payment;

      remaining_amount = amount - monthly_calculation;

      amount -= monthly_calculation;

      num_suffix (month_upCount_index);

      printf ("\nBalance remaining after %ld%s payment : %.2Lf", month_upCount_index, assigned_suffix, remaining_amount);

      month_upCount_index++;
      nr_months_index--;
    }
  return 0;
}
