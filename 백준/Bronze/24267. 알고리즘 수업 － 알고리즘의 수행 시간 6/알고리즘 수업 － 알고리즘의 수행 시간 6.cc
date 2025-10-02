#include <iostream>

using namespace std;

int main(){
    long long int n;
    cin >> n;
    long long int result = n * (n - 1) * (n - 2) / 6;
    cout << result << "\n" << 3 << "\n";
}