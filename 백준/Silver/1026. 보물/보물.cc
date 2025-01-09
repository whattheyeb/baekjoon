#include <iostream>
#include <algorithm>

using namespace std;

// 첫째줄에 배열 속 숫자 개수 n개개
// A 배열 입력
// B 배열 입력
// 출력값 : S = A[0] × B[0] + ... + A[N-1] × B[N-1] (합의 최솟값값)

bool compare(int i, int j){
    return j < i;
}

int main(){
    int count = 50;
    int a[50];
    int b[50];
    int b_copy[50];
    int add;
    int sum = 0;

    // a 배열과 b 배열 두개를 입력받는다
    cin >> count;
    for(int i = 0; i < count; i++){
        cin >> a[i];
    }

    for(int j = 0; j < count; j++){
        cin >> b[j];
        b_copy[j] = b[j];
    }

    // a 배열과 b 배열을 정렬한다.
    sort(a, a + count);
    sort(b_copy, b_copy + count, compare);

    // 각각 배열에서 가장 큰 숫자에는 가장 작은 숫자를 매칭하는 방식으로
    for(int i = 0; i < count; i++){
        add = a[i] * b_copy[i];
        sum += add;
    }

    cout << sum << endl;

}