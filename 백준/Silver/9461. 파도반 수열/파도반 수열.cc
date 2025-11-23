#include <iostream>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t;
    cin >> t;
    
    long long int dp[101];
    for(int i = 1; i <= 7; i++){
        if(i <= 3){
            dp[i] = 1;
        }
        else if(i == 4){
            dp[i] = 2;
        }else{
            dp[i] = i - 3;
        }
    }
    for(int i = 8; i <= 101; i++){
        dp[i] = dp[i - 1] + dp[i - 5];
        
    }

    while(t > 0){
        int n;
        cin >> n;
        cout << dp[n] << '\n';
        t--;
    }
}