#include <iostream>

using namespace std;

int main(){
    int testcase_num;
    string s;

    cin >> testcase_num;

    for(int i = 0; i < testcase_num; i++){
        cin >> s;
        cout << s[0] << s[s.size() - 1] << endl;
    }

}