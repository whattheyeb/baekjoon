#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int T; 
    cin >> T;

    while (T--) {
        int arr[10];

        for (int i = 0; i < 10; i++) {
            cin >> arr[i];
        }

        sort(arr, arr + 10, greater<int>());

        cout << arr[2] << endl;
    }

    return 0;
}
