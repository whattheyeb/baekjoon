#include <iostream>
#include <vector>

using namespace std;

int main(){
    int testCnt;
    cin >> testCnt;

    vector<int> prev(80);
    string input;
    int sum;
    int score;
    for(int i = 0; i < testCnt; i++){
        prev = {0};
        sum = 0;
        score = 1;
        cin >> input;
        for(int j = 0; j < input.size(); j++){            
            if(input[j] == 'O'){
                prev[j] = 1;
                if((j > 0) && (prev[j - 1] == 1)){
                    score ++;
                }else{
                    score = 1;
                }
                sum += score;
            }else{
                prev[j] = 0;
            }
        }
        cout << sum << "\n";
    }
}