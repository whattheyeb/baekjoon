#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int N;
    cin >> N;

    vector<int> arr;
    int input;
    for(int i = 0; i < N; i++){
        cin >> input;
        arr.push_back(input);
    }
    sort(arr.begin(), arr.end());

    for(int i : arr)
        cout << i << '\n';
}