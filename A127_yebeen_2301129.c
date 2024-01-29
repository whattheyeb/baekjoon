#include <stdio.h>

int gcd(int a, int b){
    while(b!=0){
        int r = a % b;
        a = b;
        b = r;
    }
    return a;
}

int main(){
    int count;
    int a,b;
    int lcm;
    scanf("%d", &count);
    for(int i = 1; i<=count; i++){
        scanf("%d %d", &a, &b);
        lcm = a * b / gcd(a,b);
        printf("%d\n", lcm);
    }



}