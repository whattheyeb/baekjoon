#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool comp(int a, int b){
    return a > b;
}

int main(){
    string num;
    cin >> num;
    int n;
    vector<int> arr(num.size());
    for(int i = 0; i < num.size(); i++){
        n = num[i] - '0';
        arr.push_back(n);
    }
    sort(arr.begin(), arr.end(), comp);
    for(int i = 0; i < num.size(); i++){
        cout << arr[i];
    }
    cout << "\n";
    
}