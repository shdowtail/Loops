/*Show how to replace a CONTINUE statement by an equivalent GOTO statement*/

#include <stdio.h>

int continuation (void)
{
  for (int j = 0; j <= 8; j++)
    {
      if (j == 4)
        {
          /* The continue statement is encountered when
           * the value of j is equal to 4.
           */
          continue;
        }

      /* This print statement would not execute for the
   * loop iteration where j ==4  because in that case
   * this statement would be skipped.
   */
      printf ("%d ", j);
    }
  return 0;
}

int going_to (void)
{

  for (int i = 0; i <= 8; ++i)
    {
      if (i == 4)
        {
          goto exit;
        }
      printf ("%d ", i);
    exit:;
    }
  return 0;
}

int main ()
{
  printf ("continue\n");
  continuation ();
  printf ("\n\n");
  printf ("goto\n");
  going_to ();

}
//
// Created by konket on 05/10/2022.
//
