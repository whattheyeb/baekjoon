#include <iostream>
#include <vector>

using namespace std;

int cntDivider(int n){
    int cnt = 0;
    
    for(long long int i = 1; i * i <= n; i++){
        if(n % i == 0){
            if(i * i == n){
                cnt++;
            }else{
                cnt+=2;
            }
        }
    }
    return cnt;
}

int main(){
    int n;
    cin >> n;
    // 각 창문의 약수
    // 6개의 창문 (4 6 -> 왜냐? 2와 4의 배수임, 2 3 6의 배수임 
    // 창문숫자의 약수 개수가 -> 홀수이면 열림 1, 짝수이면 닫힘 0

    int open = 0;
    // for(int i = 1; i <= n ; i++){
    //     if(cntDivider(i) % 2 != 0){
    //         open++;
    //     }
    // }
    for(int i = 1; i * i <= n; i++){
        if((i * i) <= n){
            open = i;
        }
    }
    cout << open << '\n';
}