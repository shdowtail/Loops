//
// Created by konke on 22.10.22.
//
//broken
#include "date-string-cut.h"
#include <stdio.h>
#include <string.h>
#include <math.h>

void dateCut(char date_string[])
{

  const char stop[2] = "/";

  char *token;

  token = strtok (date_string, stop);
  str_month = token;
  printf ("month %s", token);
  	int count = 1;
  while (token != NULL)
	{
	  if (count==1)
	  {
	  token = strtok (NULL, stop);
	  day = token;

	  }
		count++;
	if(count == 2)
	{
	  token = strtok (NULL, stop);
	  year = token;
	}






	}


}
