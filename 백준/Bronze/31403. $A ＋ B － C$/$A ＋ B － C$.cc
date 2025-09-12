#include <iostream>

using namespace std;

int main(){
    int a, b, c;
    cin >> a >> b >> c;
    // 수로 생각했을때
    int output1 = a + b - c;
    // 문자열로 생각했을때
    // b 의 자릿수만큼 10을 곱해서 앞으로 당긴다. 
    int cnt = 0;
    int copy_b = b;
    while(copy_b != 0){
        copy_b /= 10;
        cnt++;
    }
    for(int i = 0; i < cnt; i++){
        a *= 10;
    }
    int output2 = a + b - c;
    cout << output1 << '\n' << output2 << '\n';
}