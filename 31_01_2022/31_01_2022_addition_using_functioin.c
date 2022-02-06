/*addition using function*/


#include <stdio.h>
void addition(int,int);
void main()
{
    int a, b;
    printf("Hello enter 2 numbers");
    scanf("%d %d",&a,&b);
    addition(a,b);
    printf("\nty");
}
void addition(int x,int y){
    printf("\n\n\n%d",x+y);
}