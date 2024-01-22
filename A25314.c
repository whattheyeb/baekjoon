#include <stdio.h>

int main(){
    int numsize;
    scanf("%d", &numsize);
    for(int i = 1; i <= numsize/4; i++){
        printf("long ");
    }
    printf("int");
}