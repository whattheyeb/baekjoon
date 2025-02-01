#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

char* solution(int a, int b) {
    char* answer = (char*)malloc(4 * sizeof(char));
    int days_in_months[12] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    char* days_of_week[7] = {"SUN", "MON", "TUE", "WED", "THU", "FRI", "SAT"};
    int total_days = 0;
    
    for (int i = 0; i < a - 1; i++) {
        total_days += days_in_months[i];
    }
    
    total_days += b;
    
    int day_of_week = (total_days + 4) % 7;
    
    strcpy(answer, days_of_week[day_of_week]);
    
    return answer;
}
