/*addition game*/


#include <stdio.h>
#include <stdlib.h>
#include<time.h>

int main() {
    startfromtop:
    printf("   Hey! lets start learning addition\n");
    
    int random[2],chance=5, usernum=0, again = 0, digits = 100,addition =0,mul = 10;
    
    startagain:
    
    srand(time(0));
 
    for(int i = 0; i<2; i++){
        random[i] =(rand()%digits)-1;
        
        
    }
    for(int i = 0; i<2; i++){
        printf(" %d ", random[i]);
        addition = addition+random[i];
    }
    printf("\n\n%d",addition);
    while(chance!=0){
        printf("\n\nEnter your answer: ");
        scanf("%d",&usernum);
        if(usernum==addition){
            printf("\n\nYay you are right");
            printf("\n\nlets move forward");
            digits = 100*mul;
            mul = mul*mul;
            goto startagain;
        }
        else if(usernum!=addition){
            chance--;
            printf("\n\nDont lose hope try again: %d",chance);
            goto startfromtop;
        }
        
    }
}