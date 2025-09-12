#include <iostream>

using namespace std;

int main(){
    string input;

    cin >> input;

    // 아스키 코드를 비교하여 소문자는 대문자로, 대문자는 소문자로 
    for(int i = 0; i < input.size(); i++){
        // 소문자일때
        if(input[i] >= 'a'){
            input[i] -= 'a' - 'A';
        }else{
            input[i] += 'a' - 'A';
        }
    }

    for(int i = 0; i < input.size(); i++){
        cout << input[i];
    }
    cout << '\n';
}