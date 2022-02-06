/*converting 4444 to 3333 using string*/

#include <stdio.h>  

int main()  
{  
    int num, a; 
    int count = 0;
    printf ("Enter a number range: ");  
    scanf (" %d", &num);
    a = num;
    while(a!=0)
    {
        count++;
        a=a/10;
    }
    printf("count %d",count);
    int i,b=1,c;
    
    for(i= 0;i<count;i++)
    {
        c = num-b;
        num = c;
        b = b*10;
    }
    printf("\nyour output is %d",c);
}