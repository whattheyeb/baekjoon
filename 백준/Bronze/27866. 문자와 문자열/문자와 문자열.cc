#include <iostream>

using namespace std;

int main(){
    string input;
    int num;

    cin >> input;
    cin >> num;

    for(int i = 0; i < input.size(); i++){
        if(i == num - 1){
            cout << input[i] << endl;
        }
    }
}