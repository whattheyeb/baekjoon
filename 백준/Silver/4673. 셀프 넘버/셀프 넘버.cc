#include <iostream>
#include <vector>

using namespace std;


int d(int n) {
    int sum = n;
    while (n > 0) {
        int a = n % 10;  
        sum += a;        
        n /= 10;         
    }
    return sum;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    const int LIMIT = 10000;
    vector<bool> dp(LIMIT + 1, false);  


    for (int i = 1; i <= LIMIT; i++) {
        int result = d(i);
        if (result <= LIMIT) {
            dp[result] = true;  
        }
    }


    for (int i = 1; i <= LIMIT; i++) {
        if (!dp[i]) {
            cout << i << '\n';
        }
    }

    return 0;
}