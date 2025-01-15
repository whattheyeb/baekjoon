#include <iostream>
#include <string>

using namespace std;

int main(){
    string str;
    int str_size;
    int word_cnt = 0;

    getline(cin, str);
    str_size = str.size();

    for(int i = 0; i < str_size; i++){
        if(str[i] != ' ' && (i == 0 || str[i - 1] == ' '))
            word_cnt++;
    }

    cout << word_cnt << endl;

}