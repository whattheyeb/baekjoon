#include <iostream>
#include <vector>

using namespace std;

int gcd(int a, int b){
    if(b == 0) return a;
    else return gcd(b, a % b);
}

int main(){
    int n;
    cin >> n;
    vector<int> num(n);

    for(int i = 0; i < n; i++){
        cin >> num[i];
    }

    // 각 나무의 간격을 저장
    // 간격의 최대공약수를 구해야함
    vector<int> interval(n - 1);
    for(int i = 1; i < n; i++){
        interval[i - 1] = num[i] - num[i - 1];
    }

    int dividor = gcd(interval[0], interval[1]);
    for(int i = 2; i < n - 1; i++){
        dividor = gcd(interval[i], dividor);
    }

    int cnt = 0;
    for(int i = 0; i < n - 1; i++){
        cnt += (interval[i] / dividor) - 1;
    }

    cout << cnt << '\n';
}