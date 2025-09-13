#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void isRight(int hyp, int a1, int b1){
    if((hyp * hyp) == (a1 * a1 + b1 * b1)){
        cout << "right" << "\n";
    }else{
        cout << "wrong" << "\n";
    }
}

int main(){
    int len1, len2, len3;
    // max 는 표준 함수 std::max 와 의미가 겹친다.
    int hyp;
    int a[3];

    while(cin >> a[0] >> a[1] >> a[2]){
        if(a[0] == 0 && a[1] == 0 && a[2] == 0){
            break;
        }
        sort(begin(a), end(a));
        isRight(a[2], a[1], a[0]);
    }
}