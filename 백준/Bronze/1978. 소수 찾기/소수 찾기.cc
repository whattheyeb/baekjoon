#include <iostream>

using namespace std;

int main(){
    int N;
    cin >> N;
    int num;
    int primeCnt = 0;
    bool isPrime;
    for(int i = 0; i < N; i++){
        isPrime = true;
        cin >> num;
        if(num == 1) isPrime = false;
        for(int j = 2; j < num; j++){
            if(num % j == 0){
                isPrime = false;
                break;
            }
        }
        if(isPrime){
            primeCnt++;
        }
    }
    cout << primeCnt << "\n";
}