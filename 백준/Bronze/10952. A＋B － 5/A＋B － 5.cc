#include <iostream>

using namespace std;

int main(){
    int a, b;
    do{
        cin >> a >> b;
        if(a == 0 && b == 0){
            break;
        }else{
            cout << a + b << endl;
        }
    }while(a != 0 || b != 0);
    
}