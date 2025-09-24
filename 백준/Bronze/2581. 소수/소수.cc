#include <iostream>
#include <vector>

using namespace std;

int main(){
    // M N이 주어지면 M이상 N이하의 자연수 중 소수를 찾아야함
    // 그리고 소수들의 합, 소수들 중 최솟값을 찾아야함

    int M, N;
    
    cin >> M;
    cin >> N;

    vector<bool> isPrime(N - M + 1, true);
    for(int i = M; i <= N; i++){
        if(i == 1) isPrime[i - M] = false;
        for(int j = 2; j < i; j++){
            if(i % j == 0){
                isPrime[i - M] = false;
                break;
            }
        }
    }


    // isPrime에 소수인 인덱스가 저장되어있음
    int sum = 0;
    int min = N;
    int cnt = 0;
    for(int i = 0; i < isPrime.size(); i++){
        if(isPrime[i]){
            cnt++;
            sum += M + i;
            if(min > M + i){
                min = M + i;
            }
        }
    }

    if(cnt != 0){
        cout << sum << "\n" << min << "\n";
    }else{
        cout << -1 << "\n";
    }

}