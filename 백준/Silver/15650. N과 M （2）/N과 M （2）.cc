#include <iostream>

using namespace std;

int n, m;
int arr[9];
int result[9];

void combination(int r, int index, int depth){
    // 따라서 r이 0일때는 즉, 다 뽑았다는 뜻이므로 출력한다.
    if(r == 0){
        for(int i = 0; i < m; i++)
            cout << result[i] << ' ';
        cout << '\n';
    }else if(depth == n){
        return;
    }else{
        result[index] = arr[depth];

        // arr에서 원소 a를 뽑은 경우
        combination(r - 1, index + 1, depth + 1);
        // arr에서 원소 a를 안뽑은 경우
        combination(r, index, depth + 1);
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cout.tie(nullptr);

    cin >> n >> m;
    for(int i = 0; i < n; i++){
        arr[i] = i + 1;
    }
    // r은 arr에서 몇 개를 더 뽑아야하는지를 나타내는 수이다.
    // nCm n개의 원소에서 m개를 뽑는 조합의 수
    int r = m;
    combination(r, 0, 0);
}