#include <iostream>

using namespace std;

int main(){
    int a, b;
    cin >> a >> b;

    int maxDivisor = 1;
    for(int i = 2; i <= min(a, b); i++){
        if((a % i == 0) && (b % i == 0)){
            if(maxDivisor < i){
                maxDivisor = i;
            }
        }
    }

    int minMultiplier = 1;
    minMultiplier = (a / maxDivisor) * (b / maxDivisor) * maxDivisor;

    cout << maxDivisor << "\n" << minMultiplier << "\n";
}