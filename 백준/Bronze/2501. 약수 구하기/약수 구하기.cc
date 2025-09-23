#include <iostream>

using namespace std;

int main(){
    int N, K;
    cin >> N >> K;
    int num = 0;
    int output;
    for(int i = 1; i <= N; i++){
        if(N % i == 0){
            num++;
            if(num == K){
                output = i;
            }
        }
    }
    if(num < K){
        output = 0;
    }
    cout << output << '\n';
}