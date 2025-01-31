#include <iostream>
using namespace std;

long long factorial(int n) {
    long long result = 1;
    for (int i = 2; i <= n; i++) {
        result *= i;
    }
    return result;
}

int main() {
    int N, K;
    cin >> N >> K;

    long long result = factorial(N) / (factorial(K) * factorial(N - K));

    cout << result << endl;
    return 0;
}
