#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    // 계단 수
    int n;
    cin >> n;

    vector<int> cost(n + 1);

    for(int i = 1; i <= n; i++){
        cin >> cost[i];
    }

    vector<int> dp(n + 1, 0);
    dp[1] = cost[1];
    dp[2] = cost[1] + cost[2];
    
    for(int i = 3; i <= n; i++){
        dp[i] = max(dp[i - 2] + cost[i], dp[i - 3] + cost[i - 1] + cost[i]);
    }

    cout << dp[n] << '\n';
}