#include <stdio.h>

int main(){
    int dice1, dice2, dice3;
    int samedice;
    scanf("%d %d %d", &dice1, &dice2, &dice3);
    if((dice1 == dice2) && (dice2 == dice3)){
        printf("%d", 10000 + dice1*1000);
    }else if((dice1 == dice2) || (dice1 == dice3) || (dice2 == dice3)){
        if(dice1 == dice2){
            samedice = dice1;
        }else if(dice1 == dice3){
            samedice = dice1;
        }else if(dice2 == dice3){
            samedice = dice2;
        }
        printf("%d", 1000 + samedice*100);
    }else if((dice1 != dice2) && (dice1 != dice3) && (dice2 != dice3)){
        samedice = dice1;
        if(samedice < dice2){
            samedice = dice2;
            if(samedice < dice3){
                samedice = dice3;
            }
        }else if(samedice < dice3){
            samedice = dice3;
        }
        printf("%d", samedice*100);

    }


}