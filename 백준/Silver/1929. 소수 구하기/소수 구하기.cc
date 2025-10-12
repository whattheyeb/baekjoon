#include <iostream>

using namespace std;

int main(){
    int m, n;
    cin >> m >> n;

    bool isPrime;
    for(long long int i = m; i <= n; i++){
        isPrime = true;
        if(i == 1) isPrime = false;
        else if(i == 2) isPrime = true;
        else if(i % 2 == 0) isPrime = false;
        else{
            for(long long int j = 3; j * j <= i; j += 2){
                if(i % j == 0){
                    isPrime = false;
                    break;
                }
            }
        }
        if(isPrime) cout << i << '\n';
    }
}