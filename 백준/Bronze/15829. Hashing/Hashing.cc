#include <iostream>
#include <vector>

using namespace std;

int main(){
    long long int r = 31;
    long long int M = 1234567891;

    int L;
    cin >> L;

    string input;
    cin >> input;

    long long int sum = 0;
    long long int rPow = 1;
    for(int i = 0; i < L; i++){
        // 실제 C++에서는 r^i 나 시그마가 long long 범위를 넘어가므로 매 연산마다 mod를 취해서 overflow를 방지해야 합니다.
        sum = (sum + (input[i] - 'a' + 1) * rPow) % M;
        rPow = (rPow * r) % M;
    }
    cout << sum << '\n';
}