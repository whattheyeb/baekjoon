#include <iostream>

using namespace std;

int main(){
    int a, b;
    cin >> a >> b;
    long long int output = 1LL * (a + b) * (a - b);
    cout << output << "\n";
}