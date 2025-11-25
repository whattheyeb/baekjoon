#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> arr(n + 1);
    vector<int> dp(n + 1);
    for(int i = 1; i <= n; i++){
        cin >> arr[i];
    }
    dp[1] = arr[1];
    for(int i = 2; i <= n; i++){
        if((dp[i - 1] + arr[i]) >= 0){
            dp[i] = max(dp[i - 1] + arr[i], arr[i]);
        }else{
            dp[i] = arr[i];
        }
    }

    int maximum = -1001;
    for(int i = 1; i <= n; i++){
        if(maximum < dp[i]) maximum = dp[i];
    }
    cout << maximum << '\n';
}