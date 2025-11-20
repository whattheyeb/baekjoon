#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n;
    cin >> n;

    vector<vector<int>> triangle(n + 1, vector<int>(n + 1, 0));

    int num;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= i; j++){
            cin >> num;
            triangle[i][j] = num;
        }
    }

    vector<vector<int>> dp(n + 1, vector<int>(n + 1, 0));
    dp[1][1] = triangle[1][1];
    if(n > 1){
        dp[2][1] = triangle[1][1] + triangle[2][1];
        dp[2][2] = triangle[1][1] + triangle[2][2];
    }
    for(int i = 3; i <= n; i++){
        for(int j = 1; j <= i; j++){
            if(j == 1){
                dp[i][j] = dp[i - 1][j] + triangle[i][j];
            }else if(j == i){
                dp[i][j] = dp[i - 1][j - 1] + triangle[i][j];
            }else{
                dp[i][j] = max(dp[i - 1][j - 1], dp[i - 1][j]) + triangle[i][j];
            }
        }
    }

    int result = 0;
    for(int i = 1; i <= n; i++){
        if(result < dp[n][i]){
            result = dp[n][i];
        }
    }
    cout << result << '\n';
}