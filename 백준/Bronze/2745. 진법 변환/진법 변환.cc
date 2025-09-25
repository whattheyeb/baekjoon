#include <iostream>

using namespace std;

int main(){
    string N;
    int B;
    cin >> N >> B;
    // 16진수에서 10진수로 전환
    // A 부터 Z 에 해당하는 값 배열이 있어야함
    int alphabet[26];
    for(int i = 0; i < 26; i++){
        alphabet[i] = i + 10;
    }

    long int sum = 0;
    long int powB;
    int digit;
    // 각 자리수에 n진수의 n의 자리수 곱을 하고 더해준다.
    for(int i = 0; i < N.size(); i++){
        powB = 1;
        digit = N.size() - i;
        while(digit > 1){
            powB *= B;
            digit--;
        }
        if(N[i] >= '0' && N[i] <= '9'){
            sum += powB * (N[i] - '0');
        }else{
            sum += powB * (alphabet[N[i] - 'A']);
        }
    }

    cout << sum << "\n";

}