#include <iostream>

using namespace std;

bool findPrime(int a){
    bool isPrime = true;
    if(a % 2 == 0 && a != 2) isPrime = false;
    else{
        for(long long int k = 3; k * k <= a; k += 2){
            if(a % k == 0){
                isPrime = false;
                break;
            }
        }
    }
    if(isPrime) return true;
    else return false;  
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    // 2보다 큰 짝수는 두 소수의 합으로 나타낼 수 있다
    // 골드바흐 파티션의 수를 출력해라
    int n;
    int input;
    int cnt;

    // 문제점 : 매 반복문마다 소수를 체크하는 건 효율이 매우 좋지않다
    // 100만까지 소수를 확인하는 boolean 배열을 만들어놓고 확인
    bool checkPrime[1000001] = {false};
    for(int i = 1; i <= 1000000; i++){
        if(i == 1) checkPrime[i] = false;
        else if(findPrime(i)) checkPrime[i] = true;
        else checkPrime[i] = false;
    }

    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> input;
        cnt = 0;
        for(int j = 2; j <= input / 2; j++){
            if(input - j > 0){
                if(checkPrime[j] && checkPrime[input - j]) cnt++;
            }
        }
        cout << cnt << '\n';
    }
    
}