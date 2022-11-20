//
// Created by konke on 19.10.22.
//
/* Prints a one-month calendar. the user specifies the number of days in the month and the day of the week on which
 * the month begins*/

#include <stdio.h>
#include <stdlib.h>

int main (void)
{
  char str_days_in_month[3];
  char *ptr;

  char str_first_day[9];
  char *ptr1;
  unsigned long the_first_day;

  for (;;)
    {
      unsigned long days_in_month;
      printf ("\nEnter a number of days in a month: ");
      scanf ("%2s", str_days_in_month);
      days_in_month = strtoul (str_days_in_month, &ptr, 10);
      if (days_in_month > 31)
        {
          printf ("\nimpossible operation, enter a valid value\n");

        }

      printf ("1=Sun, 7=Sat\n");
      for (;;)
        {
          printf ("\nEnter the first day of the first week: ");

          scanf ("%8s", str_first_day);
          the_first_day = strtoul (str_first_day, &ptr1, 10);
          if (the_first_day > 7)
            {
              printf ("\nimpossible operation, enter a valid value\n\n");
            }
          else break;
        }

      empty_days_beginning = the_first_day - 1;

      unsigned long index = empty_days_beginning;
      unsigned long index_save = index + 1; //saving the value of index because in the next loop it's lost

/*prints blank spaces in the beginning of the month if the starting day is anything other than saturday*/
      while (index != 0)
        {
          printf ("   ");//3 spaces
          --index;
        }

      /*for loop
       * 1st.loop that tests if the line has reached the end of the week (index_save == 7)
       * if yes then prints a new line to begin a new week after which resets the 7-day counter to 1 */

      for (unsigned long up_counter = 1; up_counter <= days_in_month; ++up_counter)
        {
          if (index_save == 7)
            {
              printf ("\n");
              index_save = 1;
            }

          printf ("%3lu", up_counter);

          index_save++;
        }
      return 0;
    }
}
