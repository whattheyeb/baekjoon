#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    // 5를 한개씩 늘려가면서 정확히 n킬로그램을 만들 수 있는 조합 만들기
    int cnt = n;
    int minCnt = n;
    // i 는 5키로 봉지 개수
    for(int i = 0; i <= n / 5; i++){
        if((n - 5 * i) % 3 == 0){
            cnt = i + (n - 5 * i) / 3;
        }
        if(minCnt > cnt) minCnt = cnt;
    }
    if(minCnt == n) minCnt = -1;
    cout << minCnt << '\n';
}