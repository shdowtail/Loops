//
// Created by konke on 18.10.22.
//
/*Program prompts the user to enter a number n, then prints all even squares betweel 1 and n*/
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
  bool flag_enter = false;
  bool flag_exit = false;
  char string[30];
  char *ptr;
  long decimal;

  printf("Enter n: ");
  scanf ("%s", string);
  decimal = strtol (string, &ptr, 10);

int i = 1;
  while (i * i <= decimal )
	{
	  if(flag_enter == true)
	  {
	  printf("%10d\n",i * i);
	  flag_exit = true;
		  goto breaker;
	  }
	  flag_enter = true;

	  breaker: i++;
	  if(flag_exit == true)
	  {
		flag_enter = false;
		flag_exit = false;
	  }
	}
  return 0;
}
