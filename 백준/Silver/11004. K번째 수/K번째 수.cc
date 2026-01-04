#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    int k;
    cin >> n >> k;

    vector<int> arr(n);
    int num;
    for(int i = 0; i < n; i++){
        cin >> num;
        arr[i] = num;
    }
    sort(arr.begin(), arr.end());
    cout << arr[k - 1] << '\n';

}