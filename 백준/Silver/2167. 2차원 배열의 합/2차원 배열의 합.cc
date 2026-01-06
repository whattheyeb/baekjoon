#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    vector<vector<int>> arr(n, vector<int>(m, 0));
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> arr[i][j];
        }
    }
    int cnt;
    cin >> cnt;
    
    int i1, j1, x1, y1;
    
    for(int k = 0; k < cnt; k++){
        int sum = 0;
        cin >> i1 >> j1 >> x1 >> y1;
        for(int l = i1 - 1; l < x1; l++){
            for(int p = j1 - 1; p < y1; p++){
                sum += arr[l][p];
            }
        }
        cout << sum << '\n';
    }


}