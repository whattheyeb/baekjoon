#include <iostream>

using namespace std;

int main(){ 
    int n;
    cin >> n;
    string input;
    for(int i = 0; i < n; i++){
        int balance = 0;
        bool check = true;
        cin >> input;
        for(int j = 0; j < input.size(); j++){
            if(input[j] == '(') balance++;
            else if(input[j] == ')') balance--;
            if(balance < 0){
                check = false;
                break;
            }
        }
        if(balance != 0) check = false;
        if(check) cout << "YES\n";
        else cout << "NO\n";
    }

}