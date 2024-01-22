#include <stdio.h>

int main(){
    int hour, min;
    int sum_time;

    scanf("%d %d", &hour, &min);
    if(min < 45){
        min += 15;
        hour -= 1;
    }else{
        min -= 45;
    }

    if(hour < 0){
        hour+=24;
    }

    printf("%d %d", hour, min);

}