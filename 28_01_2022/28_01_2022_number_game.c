/*Number game*/


#include <stdio.h>
#include <stdlib.h>
#include<time.h>

int main() {
    startagain:
    printf("   Hey! lets play number game\n");
    int random =0, chance=5,usernum=0,again = 0;
    srand(time(0));
 
    for(int i = 0; i<1; i++){
        random =(rand()%100)-1;
        printf(" %d ", random);
        
    }
    while(chance!=0){
        printf("\n\nEnter any number: ");
        scanf("%d",&usernum);
        if(usernum==random){
            printf("\n\nYay you won");
            printf("\n\nyou want to play a game (0 to no, 1 to yes)");
            scanf("%d",&again);
            if(again == 1){
                goto startagain;
            }
            else{
                chance = 0;
                break;   
            }

        }
        else if(usernum>random){
            chance--;
            printf("\n\nNumber is to high   Try left : %d",chance);
        }
        
        else if(usernum<random){
            chance--;
            printf("\n\nNumber is to low   Try left : %d",chance);
        }
    }
}