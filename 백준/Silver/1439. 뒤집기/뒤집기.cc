#include <iostream>

using namespace std;

int main(){
    string s;
    cin >> s;
    // 0에서 1로 또는 1에서 0으로 바뀌는 구간의 개수 세기
    int cnt = 0;
    int cnt0 = 0;
    int cnt1 = 0;

    // 덩이를 세야함

    for(int i = 1; i < s.size(); i++){
        if(s[i] != s[i - 1]){
            cnt++;
            if(s[i] == '0'){
                cnt0++;
            }else{
                cnt1++;
            }
        }
    }
    if(s[0] == '0') cnt0++;
    else cnt1++;

    if(cnt == 0){
        cout << cnt << '\n';
    }else{
        cout << min(cnt0, cnt1) << '\n';
    }
}