//Moved to another folder
#include <stdio.h>
#include <math.h>

int integer_value;



int strToInt(const char  number_string_to_int[100])
{
    double float_value = 0;
    double divisor;
    int i = 0;
    int sum = 0;
    int sum_f = 0;

    while (number_string_to_int[i] != '\0')
    {
        int count = 0;
        if(number_string_to_int[i] == 46)
        {
           ++i;

            while (number_string_to_int[i] != '\0')
            {

                sum_f = sum_f * 10 + (number_string_to_int[i] - 48);
                printf("\nsum_f = %d", sum_f);
                printf("\n i = %d", i);
                printf("\n count = %d", count);


            i++;
            count++;
            }
            double sum_f_f = sum_f;
            divisor = pow(10, count);
            float_value = sum_f_f / divisor;
            printf("total value =  %g", float_value + sum);





        }

        if (number_string_to_int[i] < 48 || number_string_to_int[i] > 57)  //error message
        {
            printf("Unable to convert into a integer numeric value");
        }
        else
        {
            sum = sum * 10 + (number_string_to_int[i] - 48);
            i++;
            printf("\nsum = %d", sum);
        }
    }


    return sum;

}




int main(void)
{

    char number_string[100];

    for (int i = 0; i >= 0; ++i)
    {

        printf("\nEnter a number: ");
        scanf("%s", number_string );

        integer_value = strToInt(number_string);

        printf("total_value = %d", integer_value );

    }
    return 0;

}



//
// Created by konket on 08/10/2022.
//
