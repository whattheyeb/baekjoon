#include <iostream>

using namespace std;

int main(){
    int N;
    cin >> N;
    
    int card;
    int k = 1;
    while(k <= N){
        k *= 2;
    }
    
    if(N == k/2){
        card = N;
    }else{
        card = 2 * (N - k/2);
    }
    
    cout << card << "\n";

}