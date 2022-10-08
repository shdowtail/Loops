#include <stdio.h>
/*what output does the following program fragment produce*/
//1 2 4 8 16 32 64 128
int exercise6_1(void )
{
    int i = 1;
    while (i <= 128)
    {
        printf("%d ", i);
        i *= 2;
    }

    return 0;
}
/*what output does the following program fragment produce*/
//9384 938 93 9
int exercise6_2(void)
{
    int i = 9384;
    do
    {
        printf("%d ", i);
        i /= 10;
    } while (i > 0);
    return 0;
}
/*what output does the following for statement produce*/
// i = 5, 4, 3, 2 / j = 4, 3, 2, 1
int exercise6_3(void)
{
    int i , j;
    for(i=5 , j= i-1 ; i>0, j>0 ; --i, j= i-1)
        printf("i = %d j = %d\n", i, j);

    return 0;
    }

int main(void)
{
    exercise6_1();
    printf("\n");

    exercise6_2();
    printf("\n");

    exercise6_3();
    printf("\n");
    return 0;

}


//
// Created by konket on 05/10/2022.
//
