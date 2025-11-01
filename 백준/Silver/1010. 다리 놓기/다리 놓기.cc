#include <iostream>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t;
    cin >> t;
    
    long long int combiCnt;
    long long int dp[31][31] = {0};
    for(long long int i = 1; i <= 31; i++){
        dp[1][i] = i;
        dp[i][i] = 1;
    }
    for(int i = 2; i <= 30; i++){
        for(int j = 2; j <= 30; j++){
            dp[i][j] = dp[i - 1][j - 1] + dp[i][j - 1];
        }
    }

    for(int i = 0; i < t; i++){
        int n, m;
        cin >> n >> m;
        combiCnt = dp[n][m];
        cout << combiCnt << '\n';
    }
    
}