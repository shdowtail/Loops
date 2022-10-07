#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(void)
{
    for (int i = 0; i <=0 ; ++i)
    {
        char number[100];
        float flo_num;
        int int_num;
        bool flag = 0;

        printf("Enter a number: ");
        scanf("%s", &number[100] );

        for (int j = 0; j >= 0 ; j++)
        {
                if(number[j] == '.')
                {
                    flag = 1;
                    goto floating;
                }
            floating:  if(flag == true)
            {
            flo_num = atof(number[0]);
                printf("atof number: %f\n", flo_num);
                break;
            }
        }


    }
}


//
// Created by konket on 07/10/2022.
//
