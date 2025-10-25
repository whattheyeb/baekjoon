#include <iostream>
#include <unordered_map>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;
    unordered_map<string, bool> noHear;
    for(int i = 0; i < n; i++){
        string nameHear;
        cin >> nameHear;
        noHear[nameHear] = false;
    }

    int cnt = 0;
    vector<string> listNo;
    for(int i = 0; i < m; i++){
        string nameSee;
        cin >> nameSee;
        if(noHear.find(nameSee) != noHear.end()){
            listNo.push_back(nameSee);
            cnt++;
        }
    }
    cout << cnt << '\n';
    sort(listNo.begin(), listNo.end());
    for(auto s : listNo){
        cout << s << '\n';
    }

    
}