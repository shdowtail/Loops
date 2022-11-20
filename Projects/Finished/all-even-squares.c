//
// Created by konke on 18.10.22.
//
/* Program prompts the user to enter a number n, then prints all even squares between 1 and the input value(n).
 * which is achieved by using two bool flags:|> flag_enter| activates after the first iteration
 * on the second iteration it enters an|> if statement which has flag_enter == true as an activation condition.<|
 * after printing the smallest even square | flag_exit activates | after which a | goto statement |moves the program
 * to line 36 where|> int i | increments up by one.
 * |> flag_exit == TRUE| implies that|> an even iteration has just passed| so the next iteration has to ignore the entry
 *   IF statement for printing the value, that is achieved by
 * |> resetting flag_enter and flag_exit to FALSE which forces the loop to do a dry run on the next iteration.|
 *   After that process repeats until highest possible even square is printed.

 * Prior to that,|> input char string[30] is converted to long int decimal|*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main ()
{
  bool flag_enter = false;
  bool flag_exit = false;
  char string[30];
  char *ptr;
  unsigned long decimal;

  printf ("Enter a number: ");
  scanf ("%29s", string);
  decimal = strtol (string, &ptr, 10);

  int i = 1;
  while (i * i <= decimal)
    {
      if (flag_enter == true)
        {
          printf ("%10d\n", i * i);
          flag_exit = true;
          goto breaker;
        }
      flag_enter = true;

    breaker:
    i++; //goto statement goes here
      if (flag_exit == true)
        {
          flag_enter = false;
          flag_exit = false;
        }

    }

  return 0;

}
