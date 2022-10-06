/*Write a program that finds the largest in a series of number entered by the user.
 * The program must prompt the user to enter numbers one by one
 * When the user enters 0 or a negative number, the program must display the largest non-negative number entered*/
//broken state
#include <stdio.h>

int main(void)
{

    while (0 == 0)
    {

        for (int i = 0; i >= 0; ++i)
        {
            int numbers[i];

            printf("Enter a number: ");
            scanf("%d", &numbers[i]);

            int *ptr_to_num = &numbers[i];

            if (numbers[i] == 0 || numbers[i] < 0)
            {
                int *ptr_to_location = &i;
                    --ptr_to_location;

                int  largest = *ptr_to_num ;
                for ( ;ptr_to_location > 0; --ptr_to_location)
                {
                    if(ptr_to_location == 0)
                    {
                        printf(" end: %d", *ptr_to_num);
                        return 0;
                    }
                    printf("pointer values: %d\n",  numbers[*ptr_to_location]);
                }
                return 0;
            }
        }
    }
}

//
// Created by konket on 06/10/2022.
//
