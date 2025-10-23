#include <iostream>
#include <unordered_map>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n, m;
    cin >> n >> m;

    vector<string> poketmon(n);
    unordered_map<string, int> numPoketmon;
    // 문제가 m개만큼 나오는데
    // 숫자면 해당 번호 포켓몬 이름, 이름이면 해당 포켓몬 번호출력

    for(int i = 0; i < n; i++){
        string name;
        cin >> name;
        poketmon[i] = name;
        numPoketmon[name] = i;
    }

    string quiz;
    for(int i = 0; i < m; i++){
        cin >> quiz;
        if(quiz[0] >= '0' && quiz[0] <= '9'){
            int findName = stoi(quiz);
            cout << poketmon[findName - 1] << '\n';
        }else{
            cout << numPoketmon[quiz] + 1 << '\n';
        }
    }
}