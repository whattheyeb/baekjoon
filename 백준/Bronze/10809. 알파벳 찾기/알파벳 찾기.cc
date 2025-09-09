#include <iostream>
#include <vector>

using namespace std;

int main(){
    string s;
    string alpha = "abcdefghijklmnopqrstuvwxyz";
    vector<int> location(alpha.size(), -1);

    cin >> s;

    // 처음 등장하는 위치를 어떻게 저장하지?
    // 이 알파벳이 입력받은 문자열 어디에 위치했는지 찾은후 바로 break;
    for(int i = 0; i < alpha.size(); i++){
        for(int j = 0; j < s.size(); j++){
            if(alpha[i] == s[j]){
                location[i] = j;
                break;
            }
        }
    }


    for(int i = 0; i < alpha.size(); i++){
        cout << location[i] << " ";
    }
    cout << "\n";
}