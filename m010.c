/* m010.c - Day of the week.

   This program takes two integers read as command line arguments
   representing, respectively, the day and the month of a date in
   year 2020, and produces as output the corresponding day of the week.
   Output should be: Sunday, Monday, Thursday, Wednesday, Thursday,
   Friday, Saturday.

   E.g.

      command line    : m010 2 6
      expected output : Thursdays

   Directions:

      Please, edit function day_of_week();
      do no not change function main().

 */

#include <stdio.h>
#include <stdlib.h>

#define USAGE "m010 <day> <month>\n"

enum {sun, mon, tue, wed, thu, fri, sat};

/* Return the day of the week in the numeric form:
   Sunday=0, Monday=1... Saturday=6.*/

int day_of_week (int day, int month)
{
  int total_dias;
  int total_dias_mes;

  int i;
  i=0;
  total_dias_mes =0;
 
  char v_meses[12]={31,29,31,30,30,30,31,31,30,31,30,31}; //Qtd de dias nos meses
  
    if (month == 1)
    total_dias_mes = 0;

    else
    for (i=0; i<month; i++)
    total_dias_mes = (total_dias_mes+ (v_meses[i]));
    
  
  total_dias =(day+ total_dias_mes);

  if ((total_dias % 7) == 1)
    return wed;

  if ((total_dias % 7) == 2)
    return thu;

  if ((total_dias % 7) == 3)
    return fri;

  if ((total_dias % 7) == 4)
    return sat;

  if ((total_dias % 7) == 5)
    return sun;

  if ((total_dias % 7) == 6)
    return mon;

  if ((total_dias % 7) == 7)
    return tue;
}


/* Do not edit function main. */

int main (int argc, char **argv)
{
  int day, month, dweek;
  int g;

  if (argc < 3)
    {
      printf (USAGE);
      exit(1);
    }
  
  day = atoi(argv[1]);
  month = atoi(argv[2]);

  dweek = day_of_week (day, month);
  
  switch (dweek)
    {
    case sun:
      printf ("Sunday\n");
      break;
    case mon:
      printf ("Monday\n");
      break;
    case tue:
      printf ("Tuesday\n");
      break;
    case wed:
      printf ("Wednesday\n");
      break;
    case thu:
      printf ("Thursday\n");
      break;
    case fri:
      printf ("Friday\n");
      break;
    case sat:
      printf ("Saturday\n");
      break;
    default:
      printf ("Something wrong\n");
      break;
    }
  
  return 0;
}
