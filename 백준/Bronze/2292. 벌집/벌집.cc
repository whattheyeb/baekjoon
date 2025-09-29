#include <iostream>

using namespace std;

int main(){
    int N;
    cin >> N;
    
    int cnt = 6;
    int cross = 1;
    int room = 1;
    while(N > room){
        room += cnt * cross;
        cross++;
    }
    
    cout << cross << "\n";
}