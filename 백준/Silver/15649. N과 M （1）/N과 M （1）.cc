#include <iostream>
using namespace std;

int n, m;
int arr[9];      
bool visited[9]; 

void permutation(int depth) {
    if (depth == m) {
        for (int i = 0; i < m; i++) {
            cout << arr[i] << ' ';
        }
        cout << '\n';
        return;
    }

    for (int i = 1; i <= n; i++) {
        if (!visited[i]) {         
            visited[i] = true;     
            arr[depth] = i;        
            permutation(depth + 1);
            visited[i] = false;    
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n >> m;
    permutation(0);
    return 0;
}
