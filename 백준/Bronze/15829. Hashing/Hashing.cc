#include <iostream>
#include <vector>

using namespace std;

int main(){
    // 해시 함수 : 임의의 길이 입력을 받아서 고정된 길이의 출력을 내보내는 함수
    // 입력 : 영문 소문자로만 이루어져있는 문자열 (그런데 각 소문자는 번호를 부여할 수 있음)
    // 해시함수 = 문자열을 번호로 치환하고, 그 값을 다 더함, 그리고 특정수 M으로 나눔
    // 하지만 해시값이 겹칠 수 있음 => 특정수를 거듭제곱하고 곱해줌
    int r = 31;
    long long int M = 1234567891;

    int L;
    cin >> L;

    string input;
    cin >> input;

    long long int sum = 0;
    int rPow;
    for(int i = 0; i < L; i++){
        rPow = 1;
        for(int j = 0; j < i; j++){
            rPow *= r;
        }
        sum += (input[i] - 'a' + 1) * rPow;
    }
    long long int hashResult;
    hashResult = sum % M;

    cout << hashResult << '\n';
}