#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> moneyTime(n);
    vector<int> waitTime(n);
    for(int i = 0; i < n; i++){
        cin >> moneyTime[i];
    }
    sort(moneyTime.begin(), moneyTime.end());

    int sum = 0;
    waitTime[0] = moneyTime[0];
    for(int i = 1; i < n; i++){
        for(int j = 0; j <= i; j++){
            waitTime[i] += moneyTime[j];
        }
    }

    for(int m : waitTime){
        sum += m;
    }

    cout << sum << '\n';
}