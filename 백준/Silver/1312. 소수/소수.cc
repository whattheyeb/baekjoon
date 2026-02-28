#include <iostream>

using namespace std;

int main(){
    int a, b, n;
    cin >> a >> b >> n;
    if(a % b == 0){
        cout << 0 << '\n';        
    }else{
        // 잘못된 풀이
        // cout << fixed;
        // cout.precision(n + 1);
        // //cout << a / (double)b << '\n';
        // double result = a / (double)b - a / b;
        // double num = 1;

        // int underN;
        // for(int i = 1; i < n + 1; i++){
        //     num *= 0.1;
        //     underN = result / num;
        //     result -= underN * num;
        // }
        // cout << underN << '\n';

        // a / b = 몫 + 나머지 / b
        long long r = a % b;
        int digit = 0;
        for(int i = 0; i < n; i++){
            r *= 10;
            digit = r / b;
            r = r % b;
        }
        cout << digit << '\n';
    }
    
}