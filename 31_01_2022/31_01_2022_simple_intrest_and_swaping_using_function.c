/*simple intrest and swaping using function*/

#include <stdio.h>
int simpleintrest(int,int,int);
int swap(int x,int y);
int addN(int g);
void main(){
    int a, b, c;
    float ans;
    printf("Hello enter your PRINCIPLE YEAR INTREST-RATE\n");
    scanf("%d %d %d",&a,&b ,&c);
    ans = simpleintrest(a,b,c);
    printf("\n\nyour simple intrest for\nprinciple %d year %d and intrest %d is %f",a,b,c,ans);
    swap(a,b);
    addN(b);}
int simpleintrest(int x,int y,int z){
    return(x * y * z) / 100;}
int swap(int x,int y){
    int k;
    printf("\n\nunswap principle %d and intrest %d",x,y);
    k = x;
    x = y;
    printf("\n\n After swaping");
    y = k;
    printf("\n\nswap principle %d and intrest %d",x,y);}
int addN(int g){
    int i,sum=0;
    for(i=1;i<=g;i++)
    sum+=i;
    printf("\n\nsum of n numbers is: %d",sum);}