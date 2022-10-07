#include <stdio.h>
#include <stdlib.h>


int main(void)
{
    for (int i = 0; i <=0 ; ++i)
    {
        char str;
        char *ptr;
        double ret;
        printf("Enter a number: ");
       scanf("%s", &str );
       if(str == '.')
       {
           ret = strtod(&str, &ptr );
           printf("converted: %f", ret);
       }

    }




}



//
// Created by konket on 07/10/2022.
//
