#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n, k;
    cin >> n >> k;
    vector<int> coinValue(n);
    for(int i = 0; i < n; i++){
        cin >> coinValue[i];
    }
    int coinCnt = 0;
    int j = n - 1;
    while(k > 0){
        coinCnt += k / coinValue[j];
        k %= coinValue[j];
        j--;
    }
    cout << coinCnt << '\n';
}