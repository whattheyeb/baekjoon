#include <iostream>

using namespace std;

// 유클리드 호제법
long long int gcd(long long int a, long long int b){
    if(b == 0) {
        return a;
    }else{
        return gcd(b, a % b);
    }
}

int main(){
    long long int a, b;
    cin >> a >> b;
    long long int divider = gcd(a, b) * (a / gcd(a, b)) * (b / gcd(a, b));
    cout << divider << '\n';

}