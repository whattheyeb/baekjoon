#include <stdio.h>

int main(){
    int multitab, plug_cnt;
    int sum = 0;

    scanf("%d", &multitab);
    for(int i = 0; i<multitab; i++){
        scanf("%d", &plug_cnt);
        sum += plug_cnt;
    }
    sum -= multitab-1;

    printf("%d", sum);

}