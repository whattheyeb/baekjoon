#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int t[3];
    cin >> t[0] >> t[1] >> t[2];

    sort(t, t + 3); 
    if (t[2] >= t[0] + t[1]) {
        t[2] = t[0] + t[1] - 1;  
    }

    cout << t[0] + t[1] + t[2] << '\n';
}
