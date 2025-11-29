#include <iostream>

using namespace std;

int n, m;
int arr[8];
int result[8];
int visited[8];

// 중복순열
void permutation(int depth){
    if(m == depth){
        for(int i = 0; i < m; i++){
            cout << result[i] << ' '; 
        }
        cout << '\n';
        return;
    }
    for(int i = 1; i <= n; i++){
        result[depth] = i;
        permutation(depth + 1);
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cout.tie(nullptr);
    cin >> n >> m;
    permutation(0);
    return 0;

}