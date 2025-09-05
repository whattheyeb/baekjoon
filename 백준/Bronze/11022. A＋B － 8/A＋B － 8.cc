#include <iostream>

using namespace std;

int main(){
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    int num;
    cin >> num;

    int a, b;
    for(int i = 0; i < num; i++){
        cin >> a >> b;
        cout << "Case #" << i + 1 << ": " << a << " + " << b << " = " << a + b << "\n";
    }
}