#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    int output = 1;
    for(int i = 0; i < n; i++){
        output *= 2;
    }
    cout << output << '\n';
}