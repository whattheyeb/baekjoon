#include <iostream>

using namespace std;

int main(){
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    int cnt;
    cin >> cnt;

    int a, b;
    for(int i = 0; i < cnt; i++){
        cin >> a >> b;
        cout << "Case #" << i + 1 << ": " << a + b << "\n";
    }
}