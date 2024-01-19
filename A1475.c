#include <stdio.h>
#include <math.h>

int main(){
    long room_num, num;
    int count = 0;
    int num_list[8];
    int numlist[10] = {0};

    scanf("%ld", &room_num);
    num = room_num;
    while(room_num != 0){
        room_num = room_num/10;
        count++;
    }
    for(int i = 0; i<count; i++){
        num_list[i] = num / pow(10, count-i-1);
        num-=num_list[i] * pow(10, count-i-1);
        for(int j = 0; j<10; j++){
            if(num_list[i] == j){
                numlist[j]++;
            }
        }
    }
    int temp = (numlist[6] + numlist[9] + 1) /2;
    for(int i = 0; i<10; i++){
        if(i==6 || i == 9){
            continue;
        }
        if(numlist[i] >= temp){
            temp = numlist[i];
        }
    }

    if(temp == 0){
        temp = 1;
    }


    printf("%d", temp);

    
    
}