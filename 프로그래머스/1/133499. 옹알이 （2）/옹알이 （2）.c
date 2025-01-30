#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// babbling_len은 배열 babbling의 길이입니다.
// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
int solution(const char* babbling[], size_t babbling_len) {
    int answer = 0;
    const char* validWords[] = {"aya", "ye", "woo", "ma"};
    int validCount = sizeof(validWords) / sizeof(validWords[0]);

    for (size_t i = 0; i < babbling_len; i++) {
        const char* word = babbling[i];
        int index = 0;
        char lastMatch[4] = ""; 
        bool isValid = true;

        while (index < strlen(word)) {
            bool found = false;

            for (int j = 0; j < validCount; j++) {
                int len = strlen(validWords[j]);

                if (strncmp(word + index, validWords[j], len) == 0 
                    && strcmp(lastMatch, validWords[j]) != 0) {
                    index += len;
                    strcpy(lastMatch, validWords[j]);
                    found = true;
                    break;
                }
            }

            if (!found) {  
                isValid = false;
                break;
            }
        }

        if (isValid) answer++;
    }

    return answer;
}