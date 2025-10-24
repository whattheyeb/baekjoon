#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;

    vector<int> inputN(n);
    unordered_map<int, int> cnt;
    for(int i = 0; i < n; i++){
        cin >> inputN[i];
        cnt[inputN[i]]++;
    }

    int m;
    cin >> m;
    int checkN;
    for(int i = 0; i < m; i++){
        cin >> checkN;
        if(cnt.find(checkN) != cnt.end()){
            cout << cnt[checkN] << ' ';
        }else{
            cout << 0 << ' ';
        }
    }
    cout << '\n';
}