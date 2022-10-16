//
// Created by konke on 14.10.22.
//
/*displays a number with undefined amount of digits in reverse*/
//broken
#include <stdio.h>
#include <stdlib.h>


int main (void)
{
  int *number_length = NULL ;
 int input_array[0];

  for (;;)
	{
	  int input_not_array;
	  printf ("Enter a number: ");
	  scanf ("%d", &input_not_array);
		int input_array[input_not_array];
		int i;

		for(i = 0; i < input_not_array; i++)
		  {
			scanf ("%d", &input_array[i]);
		  }
	  printf ("\nyour number backwards :\n");
	  while (i < 0)
	  {
		  printf ("%d",input_array[i--]);
	  }
	  return 0;






	}

}