#include <iostream>

using namespace std;

int main(){
    //연속된 자연수의 합으로 나타내기
    int n;
    cin >> n;

    long long int sum;
    int cnt = 0;
    for(int i = 1; i <= n / 2 + 1; i++){
        sum = 0;
        for(int j = i; j <= n / 2 + 1; j++){
            sum += j;
            if(sum == n){
                // cout << j << " << \n";
                cnt++;
                break;
            }else if(sum > n){
                break;
            }
        }
    }
    if(n == 1 || n == 2) cnt = 0;
    cout << cnt + 1 << '\n';
}