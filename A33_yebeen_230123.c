#include <stdio.h>

int main(){
    
    int sum[6];

    for(int i = 1; i <= 5; i++){
        int a,b,c,d;
        scanf("%d %d %d %d", &a, &b, &c, &d);
        sum[i] = a + b + c + d;
    }

    int max = sum[1];
    int prize_num;
    for(int j = 1; j <= 5; j++){
        if(sum[j] >= max){
            max = sum[j];
            prize_num = j;
        }
        
    }

    printf("%d %d", prize_num, max);
    
}