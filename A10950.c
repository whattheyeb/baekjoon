#include <stdio.h>

int main(){
    int cnt;
    int test1;
    int test2;
    scanf("%d",&cnt);

    for(int i = 1; i <= cnt; i++){
        scanf("%d %d", &test1, &test2);
        printf("%d\n", test1 + test2);
    }
    
}