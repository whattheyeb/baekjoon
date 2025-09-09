#include <iostream>

using namespace std;

int main(){
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    int cnt;
    cin >> cnt;

    string num_arr;

    int num;
    long long int sum = 0;
    cin >> num_arr;

    for(int i = 0; i < num_arr.size(); i++){
        sum += num_arr[i] - '0';
    }

    cout << sum << "\n";
}