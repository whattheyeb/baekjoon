#include <iostream>

using namespace std;

int main(){
    int pointCnt[15];
    pointCnt[0] = 2;
    for(int i = 1; i < 16; i++){
        pointCnt[i] = 2 * pointCnt[i - 1] - 1;
    }
    int N;
    cin >> N;
    cout << pointCnt[N] * pointCnt[N] << "\n";
}