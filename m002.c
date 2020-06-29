/* m002.c - Sort three variables.

   This program takes three integers read as command 
   line arguments and outputs them in ascending order.

   E.g.

      command line    : m002 5 20 7
      expected output : 5 7 20

   Directions:

      Please, edit function sort();
      do no not change function main().

 */


#include <stdio.h>
#include <stdlib.h>

#include <stdio.h>

#define USAGE "m002 <num1> <num2> <num3>\n"

/* Sort three integers x, y, z in ascending order.*/
    
void sort (int *a, int *b, int *c)
{

int x;
int y;
int z;

  if ((*a<*b) && (*a<*c))   
 { 
     *a = *a;

     if (*b>*c) // (a,c,b)
     {
      x = *b;
      y = *c;

      *c = x;  // trocando  c por b
      *b = y; // trocando  b por c  
     }

     if (*b<*c) // (a,b,c)
    { 
        *b = *b;
        *c = *c;
      }
 }

 if ((*a<*c) && (*a>*b))    // (b,a,c) 
  {
     x = *b;
     y = *a;

     *b = y; // trocando b por a
     *a = x; // trocando a por b
  } 

  if ((*a<*b) && (*a>*c))     // (c,a,b)
  {
    x = *a; 
    y = *b;
    z = *c;

    *a = z; 
    *b = x;
    *c = y;
  }

  if ((*a>*b) && (*a>*c)) 
  {
    if (*c>*b)      // (b,c,a)
    {
      x = *a; 
      y = *b;
      z = *c;

      *a = y;
      *b = z;
      *c = x;
    }
    if  (*c<*b)   // (c,b,a)
      *b = *b;
    {
       x = *a; 
       z = *c;

       *a = z;
       *c = x;
    }
  } 
 }
/* Do not edit this function. */

int main (int argc, char **argv)
{
  int a, b, c;

  if (argc < 4)
    {
      printf (USAGE);
      exit(1);
    }

  a = atoi(argv[1]);
  b = atoi(argv[2]);
  c = atoi(argv[3]);
  
  sort (&a, &b, &c);

  printf ("%d %d %d\n", a, b, c);
  
  return 0;
}
