//which one of following for statements is not equivalent to the other two(assuming that the loop bodies are safe)[A?]
// C !
#include <stdio.h>

int a(void)
{
    int i;
    for (i = 0; i < 10; i++)
    {
        printf("a.%d\n", i);
    }
    return 0;
}
int b(void)
{
    int i;
    for (i = 0; i < 10; ++i)
    {
        printf("b.%d\n", i);
    }
    return 0;
}
int c(void)
{
    int i;
    for (i = 0; i++ < 10;)
    {
        printf("c.%d\n", i);
    }
    return 0;
}
int main(void)
{
    a();
    printf("\n\n");
    b();
    printf("\n\n");
    c();
}


//
// Created by konket on 05/10/2022.
//
