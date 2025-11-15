#include <iostream>
#include <unordered_map>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n, m;
    cin >> n >> m;

    unordered_map<string, string> memo;
    string website, password;
    for(int i = 0; i < n; i++){
        cin >> website >> password;
        memo[website] = password;
    }
    string findPassword;
    for(int i = 0; i < m; i++){
        cin >> findPassword;
        cout << memo[findPassword] << '\n';
    }

}