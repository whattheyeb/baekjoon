#include <iostream>

using namespace std;

int main() {
    int n;
    do{
        cin >> n;
        if(n == 0) break;
        int cnt = 0;
        for (int i = n + 1; i <= 2 * n; i++){
            bool isPrime = true;
            if (i == 2) isPrime = true;
            else if (i % 2 == 0) isPrime = false;
            else{
                for (long long int j = 3; j * j <= i; j += 2){
                    if (i % j == 0){
                        isPrime = false;
                        break;
                    }
                }
            }
            if (isPrime) cnt++;
        }
        cout << cnt << '\n';
    } while (n != 0);
}