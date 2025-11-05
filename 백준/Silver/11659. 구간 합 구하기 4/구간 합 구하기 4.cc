#include <iostream>
#include <vector>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n, m;
    cin >> n >> m;
    vector<int> num(n);

    int sum = 0;
    vector<int> partialSum(n + 1, 0);
    
    for(int i = 0; i < n; i++){
        cin >> num[i];
        sum += num[i];
        partialSum[i + 1] = sum;
    }

    int a, b;
    for(int i = 0; i < m; i++){
        cin >> a >> b;
        cout << partialSum[b] - partialSum[a - 1] << '\n';
    }
}