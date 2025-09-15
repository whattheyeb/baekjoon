#include <iostream>
#include <vector>

using namespace std;

int main(){
    int input;
    vector <int> digit;
    int copyInput;
    bool isP;
    do{
        digit.clear();
        cin >> input;
        if(input == 0){
            break;
        }

        isP = true;
        copyInput = input;
        while(copyInput != 0){
            digit.push_back(copyInput % 10);
            copyInput /= 10;
        }

        for(int i = 0; i < (digit.size() / 2); i++){
            if(digit[i] != digit[digit.size() - i - 1]){
                isP = false;
                break;
            }
        }
        if(digit.size() == 1){
            isP = true;
        }
        if(isP){
            cout << "yes" << '\n';
        }else{
            cout << "no" << '\n';
        }
        

    }while(input != 0);
}