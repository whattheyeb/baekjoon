#include <iostream>
#include <string>

using namespace std;

int main(){
    string str;
    int str_size;
    getline(cin, str);
    str_size = str.size();
    
    for(int i = 0; i < str_size; i++){
        cout << str[i];
        if((i + 1) % 10 == 0){
            cout << endl;
        }
    }
}