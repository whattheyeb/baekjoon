#include <iostream>
#include <string>

using namespace std;

int fiveCnt(int n){
    int cnt = 0;
    while(n % 5 == 0){
        n /= 5;
        cnt++;
    }
    return cnt;
}

int fivePower(int n){
    int result = 1;
    while(n != 0){
        result *= 5;
        n--;
    }
    return result;
}

int twoCnt(int n){
    int cnt = 0;
    while(n % 2 == 0){
        n /= 2;
        cnt++;
    }
    return cnt;
}

int twoPower(int n){
    int result = 1;
    while(n != 0){
        result *= 2;
        n--;
    }
    return result;
}

int main(){
    long long int n;
    cin >> n;
    
    // 20을 넘어서면 long long int 자료형의 범위를 벗어남
    // 5 ~ 9 (5*2 가 포함되어있는 경우 - 1개)
    // 10 ~ 14 (5*2 가 두번 포함되어있는 경우 - 2개)
    // 15 ~ 
    // 1부터 입력받은 숫자를 for문으로 돌리면서 곱하는 동시에 10을 나눈다. 
    
    int cnt = 0;
    long long int factorial = 1;
    int cnt5 = 0;
    int cnt2 = 0;
    for(int i = 1; i <= n; i++){
        factorial *= i;
        // i에 들어있는 2의 개수를 누적으로 더함, 동시에 factorial은 나눔
        cnt2 += twoCnt(i);
        cnt5 += fiveCnt(i);
        factorial /= twoPower(twoCnt(i));
        factorial /= fivePower(fiveCnt(i));
        
    }
    cnt = min(cnt5, cnt2);
    if(n <= 1) cnt = 0;
    
    cout << cnt << '\n';
}