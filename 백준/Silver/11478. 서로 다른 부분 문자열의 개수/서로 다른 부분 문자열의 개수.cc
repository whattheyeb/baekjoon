#include <iostream>
#include <unordered_map>
#include <string>

using namespace std;

int main(){
    string input;
    cin >> input;
    unordered_map<string, int> partStrArray;
    // 부분문자열의 길이만큼 자르기
    for(int i = 1; i <= input.size(); i++){
        for(int j = 0; j < input.size(); j++){
            if(partStrArray.find(input.substr(j, i)) != partStrArray.end()){
                partStrArray[input.substr(j, i)]++;                
            }else{
                partStrArray[input.substr(j, i)] = 0;
            }
        }
    }
    cout << partStrArray.size() << '\n';
}