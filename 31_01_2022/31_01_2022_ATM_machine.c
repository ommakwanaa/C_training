/*ATM machine using function and switch case*/

#include <stdio.h>
int acccheck();
int pincheck(int);
int menue(int);
int main(){
    int  ret,ret2;
    ret = acccheck();
    if(ret == 0){
      printf("\n\nsomething went wrong");}
    else{
        ret2 = menue(ret);
        if(ret2 == 1000){
           printf("\n\nTHANKS FOR BANKING WITH US :) "); 
        }}}

int menue(int acnum){
    int account[6]={111,101,201,301,401,501}, forcase = 0,minus=0,yesnoloop;
    float balance[6]={10000,2900.5,4500,49000,95000.5,68000.5};
    menueagain:
    printf("\n\tSelect the option\n\n   1) Check Balance: 1\n   2) Widrawal Cash: 2\n   3) Deposit Cash: 3\n   4) Quit: 4\n");
    scanf("%d",&forcase);
    switch(forcase){
        case 1:
        printf("\n\t Check Balance");
        for(int i=0;i<6;i++){if(account[i]==acnum){printf("\n\nYOUR BALANCE IS: %f\n",balance[i]);}}
        printf("\nFOR CONTINUE: 1\nFOR QUITING: 0\n");
        scanf("%d",&yesnoloop);
        if(yesnoloop == 1){goto menueagain;}
        else{return 1000;} 
                
        case 2:
        printf("\n\t Widrawal Cash");
        printf("\nENTER THE AMOUNT: ");
        scanf("%d",&minus);
        for(int i=0;i<6;i++){if(account[i]==acnum){printf("\n\nYOUR REMAINING BALANCE IS: %f\n",balance[i]-minus);}balance[i]=balance[i]-minus;}
        printf("\nFOR CONTINUE: 1\nFOR QUITING: 0\n");
        scanf("%d",&yesnoloop);
        if(yesnoloop == 1){goto menueagain;}
        else{return 1000;} 
        
        case 3:
        printf("\n\t Deposit Cash");
        printf("\nENTER THE AMOUNT: ");
        scanf("%d",&minus);
        for(int i=0;i<6;i++){if(account[i]==acnum){printf("\n\nYOUR REMAINING BALANCE IS: %f\n",balance[i]+minus);}balance[i]=balance[i]+minus;}
        printf("\nFOR CONTINUE: 1\nFOR QUITING: 0\n");
        scanf("%d",&yesnoloop);
        if(yesnoloop == 1){goto menueagain;}
        else{return 1000;}
        
        case 4:
        printf("Quiting");return 1000;
    }
    
}
int pincheck(int acnum){
    int pinno = 0,account[6]={111,101,201,301,401,501},pin[6]={11,10,20,30,40,50},countpin = 3,i=0;
    pinagain:
    printf("\nEnter pin: \n");
    scanf("%d",&pinno);
    while(countpin != 0){
        for(int i=0;i<6;i++){
            if(account[i]==acnum && pin[i]==pinno){
                printf("\n\ntrue  %d",pin[i]);
                return pinno;
                countpin = 0;}
            else{continue;}}
        countpin--;
        printf("\nINCORRECT PIN\nTRY LEFT: %d\n",countpin);
        if(countpin == 0){return 111;break;}
        goto pinagain;
    }}

int acccheck(){
    int pinret = 0,account[6]={111,101,201,301,401,501},accno=0,pinno = 0,pin[6]={00,10,20,30,40,50},countacc = 3,i=0;
    accagain:
    printf("\nEnter account number: \n");
    scanf("%d",&accno);
    while(countacc != 0){
        for(int i=0;i<6;i++){
            if(account[i]==accno){
                pinret = pincheck(accno);
                if(pinret == 111){
                    printf("CARD BLOCKED\n");
                    return 0;}
                else{return accno;  }
                countacc = 0;}
            else{continue;}}
        countacc--;
        printf("\nINCORRECT ACCOUNT NUMBER\n");
        if(countacc == 0){printf("\nblock account no");break;}
        goto accagain;
    }return 0;}