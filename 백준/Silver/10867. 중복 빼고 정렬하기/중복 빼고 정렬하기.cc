#include <iostream>
#include <set>
using namespace std;

int main() {
    int N;
    cin >> N;
    set<int> numbers;  

    for (int i = 0; i < N; i++) {
        int num;
        cin >> num;
        numbers.insert(num);
    }

    for (const int& num : numbers) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
