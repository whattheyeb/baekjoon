#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    // 테스트 케이스 수
    int testcase;
    cin >> testcase;

    
    while(testcase--){
        // 종류별 개수
        unordered_map<string, int> kindCnt;
        string name, kind;
        int wearCnt;
        cin >> wearCnt;
        int cnt = 0;
        for(int j = 0; j < wearCnt; j++){
            cin >> name >> kind;
            // 입력받은 의상의 종류가 이미 있다면 카운트 증가
            if(kindCnt.find(kind) != kindCnt.end()){
                kindCnt[kind]++;
            }else{
                kindCnt[kind] = 1;
                cnt++;
            }
        }
        // cout << cnt << " cnt\n";
        int combination = 1;
        if(cnt == 1){
            combination = wearCnt + 1;
        }else{
            for(auto it = kindCnt.begin(); it != kindCnt.end(); ++it){
                // cout << "it second " << it->second << '\n';
                combination *= (it->second + 1);
            }
        }
        cout << combination - 1 << '\n';
    }
}
