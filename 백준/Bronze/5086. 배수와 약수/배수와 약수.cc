#include <iostream>

using namespace std;

int main(){
    int a, b;
    do{
        cin >> a >> b;
        if(a == 0 && b == 0) break;
        if(b % a == 0){
            cout << "factor" << '\n';
        }else if(a % b == 0){
            cout << "multiple" << '\n';
        }else{
            cout << "neither" << '\n';
        }
    }while(a != 0 || b != 0);
}