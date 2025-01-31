#include <iostream>

using namespace std;

int main(){
    string input;
    int count = 0;

    cin >> input;

    for(int i = 0; i < 101; i++){
        if((input[i] >= 'A') && (input[i] <= 'z')){
            count++;
        }
        if(input[i] == '\0')
            break;
    }
    cout << count << endl;
}