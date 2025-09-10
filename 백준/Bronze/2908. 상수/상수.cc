#include <iostream>
#include <vector>

using namespace std;

int main(){
    string num1, num2;
    vector<char> sangsu1, sangsu2;

    cin >> num1 >> num2;

    for(int i = num1.size() - 1; i >= 0; i--){
        sangsu1.push_back(num1[i]);
        sangsu2.push_back(num2[i]);
    }

    for(int i = 0; i < num1.size(); i++){
        if(sangsu1[i] > sangsu2[i]){
            for(int j = 0; j < sangsu1.size(); j++){
                cout << sangsu1[j];
            }
            cout << "\n";
            break;
        }else if(sangsu1[i] < sangsu2[i]){
            for(int j = 0; j < sangsu2.size(); j++){
                cout << sangsu2[j];
            }
            cout << "\n";
            break;
        }
    }
}