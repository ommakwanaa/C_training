/*Cost Price Problem Suppose, a user enters the total selling price of 15 items and the
profit earned on the total. Write a program to find out the cost price of one item.*/

#include <stdio.h>
int main()
{
 int a,b;
 printf("Enter your total selling price ");
 scanf("%d",&a);
 printf("\nEnter your total profit ");
 scanf("%d",&b);
 printf("\nCost price for 1 item is %.5f",((a-b)/15.00));
 return 0;
}