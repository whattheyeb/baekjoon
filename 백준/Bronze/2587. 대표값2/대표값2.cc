#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int sum = 0;
    vector<int> arr1(5);
    for(int i = 0; i < 5; i++){
        cin >> arr1[i];
        sum += arr1[i];
    }
    sort(arr1.begin(), arr1.end());
    sum /= 5;
    cout << sum << "\n" << arr1[2] << "\n";
}