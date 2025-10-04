#include <iostream>
#include <vector>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;

    vector<int> cnt(10001, 0);

    int x, maxValue = 0;
    for(int i = 0; i < n; i++){
        cin >> x;
        cnt[x] += 1;
        if(maxValue < x){
            maxValue = x;
        }
    }

    for(int i = 0; i <= maxValue ; i++){
        for(int j = 0; j < cnt[i]; j++){
            cout << i << '\n';
        }
    }
}