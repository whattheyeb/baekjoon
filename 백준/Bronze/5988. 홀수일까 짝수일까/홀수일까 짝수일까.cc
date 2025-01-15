#include <iostream>
#include <cstring>

using namespace std;

int main(){
    int count;

    cin >> count;

    while(count != 0){
        char n[60];
        cin >> n;
        if((n[strlen(n) - 1] - '0') % 2 == 0)
            cout << "even" << endl;
        else
            cout << "odd" << endl;
        count--;
    }
}