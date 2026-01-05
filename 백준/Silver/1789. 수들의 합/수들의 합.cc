#include <iostream>

using namespace std;

int main(){
    long long int s;
    cin >> s;
    
    long long int n = 1;
    int output = 1;
    while(1){
        if(n * (n + 1) / 2 > s){
            output = n - 1;
            break;
        }
        n++;
    }
    cout << output << '\n';
    
}