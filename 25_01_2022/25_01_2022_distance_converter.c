/*The distance between two cities (in km.) would be given by the user. Write a
program to convert and print this distance in: 1. Feet. 2. Meters. 3. Inches. 4.
Centimeters.*/

#include <stdio.h>
int main()
{
 int a;
 printf("enter your distance in km ");
 scanf("%d",&a);
 printf("\nyour distance in feet is %.5f",(a*3280.84));
 printf("\nyour distance in meter is %d",(a*1000));
 printf("\nyour distance in inch is %.5f",(a*39370.1));
 printf("\nyour distance in cm is %d",(a*100000));
 return 0;
}