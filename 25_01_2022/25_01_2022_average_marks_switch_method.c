/*average marks of the students and giving grade using switch method.*/

#include <stdio.h>
int main()
{
 int m1,m2,m3,m4, avg ,o;
 printf("Enter maths marks from 100 ");
 scanf("%d",&m1);
 printf("\nEnter social science marks from 100 ");
 scanf("%d",&m2);
 printf("\nEnter science marks from 100 ");
 scanf("%d",&m3);
 printf("\nEnter english marks from 100 ");
 scanf("%d",&m4);
 avg = (m1+m2+m3+m4)*100;
 printf("\ntotal marks multiply with 100 %d",avg);
 avg = avg/400;
 printf("\nprecentage of marks %d",avg);

 if(90<avg)
 {
 printf("\ngrade A %d",avg);
 o = 1;
 }
 else if(avg>= 75 && avg<=90)
 {
 printf("\ngrade B %d",avg);
 o = 1;
 }
 else if(avg>= 60 && avg<=75)
 {
 printf("\ngrade C %d",avg);
 o = 2;
 }
 else if(avg>= 35 && avg<=60)
 {
 printf("\ngrade D %d",avg);
 o = 2;
 }
 else
 {
 printf("\ngrade f %d",avg);
 o = 3;
 }

 switch(o)
 {
 case 1:
 printf("\nyour garde is between a/b"); break;
 case 2:
 printf("\nyour garde is between c/d"); break;
 case 3:
 printf("\nyour garde is f"); break;
 default:
 printf("nothing");

 }

}