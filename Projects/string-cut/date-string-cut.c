//
// Created by konke on 22.10.22.
//
//broken
#include "date-string-cut.h"
#include <stdio.h>
#include <string.h>

char dateCut (char *month, char *day, char *year, char date_string[])
{

  const char stop[2] = "/";

  char token;

  token = *strtok (date_string, stop);
  month = &token;
  ;

  while (token != NULL)
	{

	  token = *strtok (NULL, stop);
	  day = &token;

	  token = *strtok (NULL, stop);
	  year = &token;



	}

  return *month,*day,*year;
}
