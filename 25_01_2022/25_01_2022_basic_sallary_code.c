/*In a company an employee is paid as under: Along with the basic salary, the
employee would be given dearness allowance of 40% of his basic salary and house
rent allowance of 20% of his basic salary. If the basic salary of an employee is
received as input, write a program to find his/her gross salary.*/

#include <stdio.h>
int main()
{
 int a;
 printf("enter your basic sallary ");
 scanf("%d",&a);
 a = a+(a*0.2);
 printf("\nyour gross sallary for house rent is %f",(a*0.2));
 a = a+(a*0.4);
 printf("\nyour gross sallary for drearness allowance is %f",(a*0.4));

 printf("\nYour total is %d",a);
 return 0;
}