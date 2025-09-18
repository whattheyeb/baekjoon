#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;

    vector<string> word;
    string input;
    for(int i = 0; i < N; i++){
        cin >> input;
        word.push_back(input);
    }

    int minIdx;
    int k;
    for(int i = 0; i < N; i++){
        minIdx = i;
        for(int j = i + 1; j < N; j++){
            k = 0;
            if(word[minIdx].size() > word[j].size()){
                minIdx = j;
            }else if (word[minIdx].size() == word[j].size()){
                if(word[minIdx].compare(word[j]) > 0){
                    minIdx = j;
                }
            }
        }
        if(i != minIdx){
            swap(word[i], word[minIdx]);
        }
    }

    word.erase(unique(word.begin(), word.end()),word.end());

    for(int i = 0; i < word.size(); i++){
        cout << word[i] << endl;
    }
}