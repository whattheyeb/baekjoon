#include <stdio.h>

int main(){
    int count;
    int call_time = 0;
    int sum_young = 0, sum_min = 0;
    int youngsik = 0, minsik = 0;

    scanf("%d", &count);

    for(int i = 1; i <= count; i++){
        scanf("%d", &call_time);

        youngsik = 10 * (call_time/30 + 1);
        minsik = 15 * (call_time/60 + 1);
        sum_young += youngsik;
        sum_min += minsik;

    }

    if(sum_young > sum_min){
        printf("M %d", sum_min);
    }else if(sum_min > sum_young){
        printf("Y %d", sum_young);
    }else{
        printf("Y M %d", sum_min);
    }




}