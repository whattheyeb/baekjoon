#include <stdio.h>

int main(){
    int exam;
    scanf("%d", &exam);
    if(exam >= 90 && exam <=100)
        printf("A");
    else if(exam >= 80 && exam < 90)
        printf("B");
    else if(exam >= 70 && exam < 80)
        printf("C");
    else if(exam >= 60 && exam < 70)
        printf("D");
    else
        printf("F");
    
}