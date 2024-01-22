#include <stdio.h>

int main(){
    int cnt;
    scanf("%d", &cnt);
    for(int i = 1; i <= cnt; i++ ){
        for(int j = 1; j<=i; j++){
            printf("*");
        }
        printf("\n");
    }
    
}