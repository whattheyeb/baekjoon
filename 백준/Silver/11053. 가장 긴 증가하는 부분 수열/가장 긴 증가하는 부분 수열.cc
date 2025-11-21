#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>

using namespace std;

int main(){
    int n;
    cin >> n;

    int cnt = 0;
    vector<int> arr(n + 1, 0);
    vector<int> arrCopy(n + 1, 0);
    vector<int> dp(n + 1, 1);

    for(int i = 0; i < n; i++){
        cin >> arr[i];        
    }

    for(int i = 1; i < n; i++){
        for(int j = 0; j < i; j++){
            if(arr[j] < arr[i]){
                dp[i] = max(dp[i], dp[j] + 1);
            }
        }
    }
    int maximum = 0;
    for(int i = 1; i <= n; i++){
        if(maximum < dp[i]) maximum = dp[i];
    }
    cout << maximum << '\n';
}