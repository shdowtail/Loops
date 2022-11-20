
#include <stdio.h>

int strToInt (const char str[])
{
  int i = 0, sum = 0;
  while (str[i] != '\0') //while an array value 'i' isn't equal to NULL
    {
      if (str[i] < 48 || str[i] > 57) //ascii 48-57 int 0-9
        {
          printf ("Unable to convert into integer");
        }
      else
        {
          sum = sum * 10 + (str[i] - 48);
          i++;
        }

    }
  return sum;
}
int main (void)
{
  int integer_value;
  char str[100];

  printf ("\n Enter number: ");

  scanf ("%99s", str);

  integer_value = strToInt (str);

  printf ("\n Equivalent integer value: %d", integer_value);

  return 0;
}

//
// Created by konket on 07/10/2022.
//
