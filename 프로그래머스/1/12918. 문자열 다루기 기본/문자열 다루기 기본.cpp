#include <string>
#include <vector>

using namespace std;

bool solution(string s) {
    bool answer = true;
    bool length = true;
    
    if(s.size() == 4 || s.size() == 6){
        answer = true;
    }else{
        answer = false;
        return(answer);
    }
    
    for(int i = 0; i < s.size(); i++){
        if(s[i] - 48 >= 0 && s[i] - 48 <= 9){
            answer = true;
        }else{
            answer = false;
            return(answer);
        }
    }
    return answer;
}