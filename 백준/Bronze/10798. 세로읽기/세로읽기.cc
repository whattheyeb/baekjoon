#include <iostream>
#include <vector>

using namespace std;

int main(){
    vector<string> input;
    string temp;
    int maxSize = 0;
    for(int i = 0; i < 5; i++){
        cin >> temp;
        if(maxSize < temp.size()){
            maxSize = temp.size();
        }
        input.push_back(temp);
    }
    for(int i = 0; i < maxSize; i++){
        for(int j = 0; j < 5; j++){
            // 접근하려는 인덱스가 문자열의 크기보다 클때 
            if(i < input[j].size()){
                cout << input[j][i];
            }
        }
    }
    cout << '\n';
}