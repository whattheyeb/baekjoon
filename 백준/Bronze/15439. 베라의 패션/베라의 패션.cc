#include <iostream>

using namespace std;

int main(){
    // 상의 n벌, 하의 n벌
    int n;
    cin >> n;
    int colorCombination = n * (n - 1);;
    cout << colorCombination << '\n';
}