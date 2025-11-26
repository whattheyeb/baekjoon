#include <iostream>
#include <vector>

using namespace std;

int main(){
    // 123 이런 숫자
    int n;
    cin >> n;

    int cnt = 0;
    

    if(n < 100){
        cnt = n;
    }else{
        vector<int> digit(4, 0);
        cnt += 99;
        for(int i = 100; i <= n; i++){
            int num = 3;
            int tmp = i;
            while(tmp > 0){
                digit[num] = tmp % 10;
                tmp /= 10;
                num--;
            }
            int differ = digit[2] - digit[1];
            if(differ == (digit[3] - digit[2])){
                cnt++;
            }
        }
    }
    if(n == 1000){
        cnt--;
    }
    cout << cnt << '\n';
}