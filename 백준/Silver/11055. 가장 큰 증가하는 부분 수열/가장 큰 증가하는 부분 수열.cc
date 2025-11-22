#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n;
    cin >> n;

    vector<int> arr(n + 1);

    int idx;
    vector<int> mini(n, 0);
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    vector<int> dp(n + 1, 0);
    
    for(int i = 0; i < n; i++){
        for(int j = 0; j < i; j++){
            if(arr[mini[i]] > arr[j]){
                mini[i] = j;
            }
        }
    }

    dp[0] = arr[0];
    for(int i = 1; i < n; i++){
        dp[i] = arr[i];
        for(int j = 0; j < i; j++){
            if(arr[j] < arr[i]){
                dp[i] = max(dp[mini[i]], dp[j]) + arr[i];
                if(dp[mini[i]] < dp[j]) mini[i] = j;
            }
        }
    }
    

    // for(int i = 0; i < n; i++){
    //     cout << dp[i] << ' ';
    // }
    // cout << '\n';

    int maximum = 0;
    for(int i = 0; i < n; i++){
        if(maximum < dp[i]) maximum = dp[i];
    }
    cout << maximum << '\n';
}
