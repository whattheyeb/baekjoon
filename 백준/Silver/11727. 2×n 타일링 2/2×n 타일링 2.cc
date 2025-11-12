#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    int dp1[1000] = {0};
    long long int sum = 0;
    for(int i = 1; i <= n; i++){
        if(i == 1){
            dp1[i] = 1;
        }else if(i == 2){
            dp1[i] = 3;
        }else{
            if(i % 2 == 0)
                dp1[i] = (sum + 2) % 10007;
            else 
                dp1[i] = (sum + 1) % 10007;
        }
        sum += dp1[i] % 10007;
    }
    
    cout << dp1[n] << '\n';
}