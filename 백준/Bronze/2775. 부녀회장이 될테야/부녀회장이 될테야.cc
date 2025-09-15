#include <iostream>

using namespace std;

int main(){
    // a 층의 b 호에 살려면 (a - 1)층의 1호부터 b호까지 사람들의 수의 합만큼 사람들을 데려와야한다.
    int T;
    cin >> T;

    // k층에 n호에는 몇명이 살고있는가를 출력
    int k, n;

    int sum = 0;

    int person[15][15] = {0}; 
    for(int i = 1; i < 15; i++){
        person[0][i] = i;
    }

    for(int i = 1; i < 15; i++){
        sum = 0;
        for(int j = 1; j <= 15; j++){
            sum += person[i - 1][j];
            person[i][j] = sum;
        }
    }

    for(int i = 0; i < T; i++){
        cin >> k;
        cin >> n;
 
        cout << person[k][n] << '\n';
    }
}