#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(){
    string doc;
    string str1;
    
    getline(cin, doc, '\n');
    getline(cin, str1, '\n');

    int cnt = 0;
    for(int i = 0; i < doc.size(); i++){
        if(doc.substr(i, str1.size()) == str1){
            cnt++;
            i += str1.size() - 1;
        }
    }
    cout << cnt << '\n';
}