/* m008.c - Lastname-Names.

   This program reads the name of a person from the standard input
   in the form 'First-name middle-names last-name' and outputs the 
   name in the form 'LAST-NAME, first-name middle-names'.
   The name should be entered using only ASCII characters (26 letter 
   of latim alphabet, no diacrictics).


   E.g.

      command line    : m008
      standard input  : John Little Bill Doe 
      expected output : DOE, John Little Bill

   Directions:

      Please, edit function lasname();
      do no not change function main().

*/

#include <stdio.h>
#include <stdlib.h>

#include <string.h>

#define MAX 256

/* Converts the string 's' from first-middle-last name 
   form into LAST-first-middle form. */
void lastname (char *s)
{
int n;

char x[MAX]; 
char y[MAX]; 
char z[MAX];
char w[MAX];

n= strlen(s);

int i;
int j;

i=0;
j=0;

while (s[n-1-j]!= 32) //Ler de tras para frente ate pegar um 'espaco'
j++;
for (i=0; i<j-1; i++){
{if ((s[n-j+i] >=97) && (s[n-j+i]<=122)) //Se estiver minuscula 
x[i]=(s[n-j+i]-32); // Vira Maiscula
else
x[i]=s[n-j+i];} //Se tiver Maiscula continua maiscula
} //Colocar na string x a ultima palavra em maisculo
strcpy(y,x);  //Guardar a ultima palavra em maisculo em uma string y 

for(i=0; i<=n-j-1; i++)//Ler ate o ultimo espaco 
z[i]=s[i]; //Printar o codigo normal ate o ultimo espaco
strcpy(w, z); //Guardar o codigo normal em uma string w

strcpy(s, y);
strcat(s, ", ");
strcat(s, w);
}

/* Do not edit this function. */

int main (int argc, char **argv)
{
  int n;
  char name[MAX];

  fgets (name, MAX-1, stdin);
  
  lastname (name);

  printf ("%s\n", name);
  
  return 0;
}
