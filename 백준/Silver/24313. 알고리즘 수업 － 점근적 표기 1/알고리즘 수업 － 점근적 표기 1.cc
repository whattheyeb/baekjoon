#include <iostream>

using namespace std;

int main(){
    int a1, a0;
    int c, n0;
    cin >> a1 >> a0;
    cin >> c;
    cin >> n0;

    int n0fResult = a1 * n0 + a0;
    int n0gResult = c * n0;

    if((n0fResult <= n0gResult) && (c >= a1)){
        cout << 1 << '\n';
    }else{
        cout << 0 << '\n';
    }
}