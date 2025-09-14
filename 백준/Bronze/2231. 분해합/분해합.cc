#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

// 분해합 구하기
int decompositSum(int M){
    int sum = 0;
    sum += M;
    while(M != 0){
        sum += M % 10;
        M /= 10;
    }
    return sum;
}

int main(){
    int N;
    cin >> N;

    // N의 자리수 구하기
    int copyN = N;
    int digitN = 0;
    while(copyN != 0){
        copyN /= 10;
        digitN++;
    }
    
    bool isFound = false;
    int output = 0;
    int Mmax = N - (digitN * 9);
    for(int i = Mmax; i <= N; i++){
        if(decompositSum(i) == N){
            isFound = true;
            output = i;
            break;
        }
    }
    if(isFound){
        cout << output << '\n';
    }else{
        cout << 0 << '\n';
    }
}