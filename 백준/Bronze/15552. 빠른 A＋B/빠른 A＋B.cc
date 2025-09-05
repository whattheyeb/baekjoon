#include <iostream>

using namespace std;

int main(){
    int num;
    int a, b;

    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);

    cin >> num;

    for(int i = 0; i < num; i++){
        cin >> a >> b;
        cout << a + b << "\n";
    }
}