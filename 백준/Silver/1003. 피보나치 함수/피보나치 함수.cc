#include <iostream>

using namespace std;

int fibonacci(int n) {
    if (n == 0) {
        cout << "0 ";
        return 0;
    } else if (n == 1) {
        cout << "1 ";
        return 1;
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t;
    cin >> t;
    int testcase;
    int c0, c1;

    int dp0[41] = {0};
    int dp1[41] = {0};
    for(int i = 0; i < 41; i++){
        if(i == 0){
            dp0[i] = 1;
        }else if(i == 1){
            dp1[i] = 1;
        }else{
            dp0[i] = dp0[i - 1] + dp0[i - 2];
            dp1[i] = dp1[i - 1] + dp1[i - 2];
        }
    }

    for(int i = 0; i < t; i++){
        c0 = 0;
        c1 = 0;
        cin >> testcase;
        cout << dp0[testcase] << ' ' << dp1[testcase] << '\n';
    }
}