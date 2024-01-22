#include <stdio.h>
int main(){
    long long int a;
    long long int sum = 0;
    scanf("%lld", &a);
    for(int i = 1; i <= a; i++){
        sum += i;
    }
    printf("%lld", sum);

}