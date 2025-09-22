#include <iostream>

using namespace std;

int main(){
    int X;
    cin >> X;

    // X가 몇번째 그룹에 속하는지 확인
    int group = 1;
    while(X > group * (group + 1)/2){
        group++;
    }

    // 분자, 분모
    int a = 1;
    int b = 1;
    // X가 그룹 안에서 몇번째인지
    int N = X - (group - 1) * group / 2;
    if(group % 2 == 0){
        a = N;
        b = group - N + 1;
    }else{
        a = group - N + 1;
        b = N;
    }
    cout << a << "/" << b << "\n";
}