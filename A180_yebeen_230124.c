#include <stdio.h>

int main(){
    int a,b,c;
    

    scanf("%d %d %d", &a, &b, &c);
    int first = (a+b)%c;
    int sec = ((a%c) + (b%c))%c;
    int third = (a*b)%c;
    int four = ((a%c)*(b%c))%c;

    printf("%d\n", first);
    printf("%d\n", sec);
    printf("%d\n", third);
    printf("%d", four);


}