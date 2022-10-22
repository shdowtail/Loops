//
// Created by konke on 21.10.22.
//
//broken

#include<stdio.h>

#include "string-cut/date-string-cut.h"


int main (void)
{

  char str_date[9];
  char *str_day = NULL, *str_month = NULL, *str_year = NULL;

  printf ("\nEnter date(mm/dd/yy)");
  scanf ("%s", str_date);
  dateCut (str_month, str_day, str_year, str_date);
  printf ("%2s/%2s/%2s", str_month, str_day, str_year);

  return 0;

  /* month = strtoul (str_month, &ptr_m, 10 );
  day = strtoul (str_day, &ptr_d, 10);
  year = strtoul (str_year, &ptr_y, 10);*/


}





