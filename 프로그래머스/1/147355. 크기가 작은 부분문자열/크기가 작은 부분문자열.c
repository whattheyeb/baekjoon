#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
int solution(const char* t, const char* p) {
    int answer = 0;
    int t_len = strlen(t);
    int p_len = strlen(p);
    long long p_value = atoll(p); 

    for (int i = 0; i <= t_len - p_len; i++) {
        char substring[19];  
        strncpy(substring, t + i, p_len);
        substring[p_len] = '\0'; 
        long long sub_value = atoll(substring);

        if (sub_value <= p_value) {
            answer++;
        }
    }
    return answer;
}