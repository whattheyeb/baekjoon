#include <iostream>

using namespace std;

int main(){
    int A, B, V;

    cin >> A >> B >> V;
    
    // 마지막 날에는 미끄러지지않고 A만큼 올라갈 수 있음
    int day = (V - A + (A - B - 1)) / (A - B) + 1;

    cout << day << '\n';
}