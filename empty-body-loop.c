/*rewrite the following loop so that it's body is empty*/

#include <stdio.h>

int initial(void)
{
    int m = 400;
    for (int n = 0; m > 0 ; n++)
    {
        printf("n =%d m =%d\n", n, m );
        m /= 2;
    }
    return 0;
}

int reworked(void)
{
    int m = 400;
    for (int n = 0; ; n++)
    {
        if(m <= 0)
        {
            return 0;
        } else
        printf("n =%d m =%d\n", n, m );
         m /= 2;
    }
    return 0;
}

int main(void)
{
    initial();
    printf("\n\n");
    reworked();
}