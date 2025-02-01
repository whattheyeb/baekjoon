#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
// skill_trees_len은 배열 skill_trees의 길이입니다.
int solution(const char* skill, const char* skill_trees[], size_t skill_trees_len) {
    int answer = 0;
     for (size_t i = 0; i < skill_trees_len; i++) {
        const char* skill_tree = skill_trees[i];
        int skill_index = 0;  
        bool is_valid = true;

        for (size_t j = 0; j < strlen(skill_tree); j++) {
            char current_skill = skill_tree[j];

            char* skill_pos = strchr(skill, current_skill);

            if (skill_pos) {
                int required_skill_index = skill_pos - skill;

            
                if (required_skill_index > skill_index) {
                    is_valid = false;
                    break;
                } else if (required_skill_index == skill_index) {
                    skill_index++; 
                }
            }
        }

        if (is_valid) {
            answer++;
        }
    }

    return answer;
}