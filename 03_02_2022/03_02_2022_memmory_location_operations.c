/*memmory location operations*/


#include<stdio.h> 
#include<stdlib.h> 
void main () 
{
  
int *fp, n,more;
  
printf ("How many employs are there?\n");
  
scanf ("%d", &n);
  
fp = (int *) calloc (n, sizeof (int));
for (int i = 0; i < n; i++)
    {
      scanf ("%d", &fp[i]);
    } 
printf ("How many more employs you want to add?\n");
  
scanf ("%d", &more);
if(more>0){
    fp = (int*) realloc (fp, more* sizeof(int));
    printf ("enter age of employs\n");
    for (int i = n; i < n+more; i++)
        {
          scanf ("%d", &fp[i]);
        } 
}
    printf ("age of employs are\n");
  for (int i = 0; i < n+more; i++)
    {
        printf ("%d\n", fp[i]);
        //sum += fp[i];
    } 
  free (fp);
}