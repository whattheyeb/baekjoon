#include <iostream>

using namespace std;

int main(){
    // 돌 n개, 번갈아가면서 돌을 가져감 1개 또는 3개, 마지막 돌 가져가는 사람이 이김
    // 상근이가 먼저 시작함
    
    int n;
    cin >> n;
    if(n % 2 != 0){
        cout << "SK\n";
    }else{
        cout << "CY\n";
    }
}