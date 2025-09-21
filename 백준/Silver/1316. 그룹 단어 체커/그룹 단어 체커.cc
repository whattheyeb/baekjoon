#include <iostream>
#include <vector>

using namespace std;

int main(){
    int N;
    cin >> N;
    string s;

    // 직전 문자와 다를때는 이전에 나왔던 문자인지 확인
    // 만약 이전에 나왔던 문자라면 그룹 단어 아님
    // 아니라면 okay 통과
    // 직전 문자와 같을때는 okay
    
    char prev = 0;
    
    int idx = 0;
    int groupCnt = 0;

    for(int i = 0; i < N; i++){
        cin >> s;
        
        vector<bool> alphabet(26, false);
        bool isGroup = true;
        prev = s[0];
        alphabet[prev - 'a'] = true;

        for(int j = 1; j < s.size(); j++){
            if(prev == s[j]){
                continue;
            }else{
                if(alphabet[s[j] - 'a']){
                    isGroup = false;
                    break;
                }
                alphabet[s[j] - 'a'] = true;
                prev = s[j];
            }
        }
        if(isGroup) groupCnt++;
    }
    cout << groupCnt << "\n";
    
}