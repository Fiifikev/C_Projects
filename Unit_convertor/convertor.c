#include "list.h"
#include <stdio.h>
/**
 *main - main function of the Converter
 *
 *Return: the convetered results
 */
int main(void)
{
char input, start;
float inchestometers =  0.0254;
float poungsdtok = 0.45359237;
float kmstomiles = 0.621371192;
float inchestofoot = 0.833333333;
float cmstoinches = 0.393700787;
/***/
float solve, first;


printf("\t\t Welcome to The Unit Convertor \n");
printf("If you want to start the converter, then press the 's' button \n");
scanf("%c", &start);


if (start == 's')
{
printf("Thanks for starting this Conveter.\n\n");
printf("1.Inches To Meters\n 2.Pounds To Kilometers\n 3.Kilomters To Miles\n  4.Inches To Foot\n 5.Centimeters To Inches\n");

switch (input)
{
case 1:
printf("You Choose Inches to Meters !!!!\n");

printf("Enter the value in (Inches) unit : \n");
scanf("%f", &first);

solve  = first * inchestometers;
printf("%f Inches is equal to %f Meters", first, solve);
break;

case 2:
printf("You Choose Pounds to Kilometers !!!!\n");

printf("Enter the value in (Pounds) unit : \n");
scanf("%f", &first);

solve  = first * poungsdtok;
printf("%f Inches is equal to %f Kilometers", first, solve);
break;

case 3:
printf("You Choose Kilometers to Miles !!!!\n");

printf("Enter the value in (Kilometers) unit : \n");
scanf("%f", &first);

solve  = first * kmstomiles;
printf("%f Inches is equal to %f Miles", first, solve);
break;

case 4:
printf("You Choose Inches to Foot !!!!\n");

printf("Enter the value in (Inches) unit : \n");
scanf("%f", &first);

solve  = first * inchestofoot;
printf("%f Inches is equal to %f Foot", first, solve);
break;
case 5:
printf("You Choose Centimeters to Inches !!!!\n");

printf("Enter the value in (Centimeters) unit : \n");
scanf("%f", &first);

solve  = first * cmstoinches;
printf("%f Inches is equal to %f  Inches", first, solve);
break;

default:
break;
}

}
else
{
printf("End the program.....\n\n");
}
goto end;
end:

return (0);
}

