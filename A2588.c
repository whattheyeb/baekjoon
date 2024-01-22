#include <stdio.h>

int main(){
    int cnt1, cnt2;
    int hund, ten, one;
    int result1, result2, result3, result;
    

    scanf("%d", &cnt1);
    scanf("%d", &cnt2);

    hund = cnt2 / 100;
    ten = (cnt2 % 100) / 10;
    one = cnt2 % 10;

    result1 = cnt1 * one;
    result2 = cnt1 * ten;
    result3 = cnt1 * hund;
    
    result = result1 + result2 * 10 + result3 * 100;
    printf("%d\n%d\n%d\n%d", result1, result2, result3, result);

    
    
    
}