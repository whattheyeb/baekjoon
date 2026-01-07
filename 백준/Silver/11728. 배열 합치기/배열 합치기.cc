#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m;
    cin >> n >> m;
    
    vector<int> arr(n + m);
    for(int i = 0; i < arr.size(); i++){
        cin >> arr[i];
    }
    sort(arr.begin(), arr.end());
    for(int i = 0; i < arr.size(); i++){
        cout << arr[i] << ' ';
    }
    cout << '\n';
}