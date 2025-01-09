#include <stdio.h>

int main(){
    int in1, out1, in2, out2, in3, out3, in4, out4;
    int first, sec, third, four;
    int max = 0;
    scanf("%d %d", &out1, &in1);
    scanf("%d %d", &out2, &in2);
    scanf("%d %d", &out3, &in3);
    scanf("%d %d", &out4, &in4);

    first = in1;
    sec = first - out2 + in2;
    third = sec - out3 + in3;
    four = third - out4;

    if(max <= first){
        max = first;
    }
    if(max <= sec){
        max = sec;
    }
    if(max <= third){
        max = third;
    }
    if(max <= four){
        max = four;
    }

    printf("%d", max);


}