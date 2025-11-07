#include <iostream>
#include <vector>

using namespace std;

// 1. 재귀함수 ver
int countCile(int x){
    if(x == 1){
        return 1;
    }else if(x == 2){
        return 2;
    }else{
        return(countCile(x - 1) + countCile(x - 2));
    }
}

int main(){
    int n;
    cin >> n;
    vector<long long int> cileCnt(n + 1);
    cileCnt[1] = 1;
    cileCnt[2] = 2;
    // 2. 반복문 ver
    for(int i = 3; i <= n; i++){
        cileCnt[i] = (cileCnt[i - 1] + cileCnt[i - 2]) % 10007;
    }
    int output = cileCnt[n];
    cout << output << '\n';
}