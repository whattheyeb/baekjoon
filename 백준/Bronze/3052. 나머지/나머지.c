#include <stdio.h>

int main(){
    int input;
    int remain[10] = {0};
    int result = 0;
    for(int i=0; i<10; i++){
        scanf("%d", &input);
        remain[i] = input % 42;
    }

    for(int j=0; j<10; j++){
        int count = 0;
        for(int k = j+1; k<10; k++){
            if(remain[j] == remain[k]){
                count++;
            }
        }
        if(count == 0){
            result++;
        }
    }
    


    printf("%d", result);
}