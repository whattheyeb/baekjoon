#include <iostream>
#include <vector>

using namespace std;

int main(){
    vector<int> v;
    int input1, input2;
    int sum = 0;

    cin >> input1 >> input2;

    for(int i = 1; i <= 50; ++i){
        for(int j = 0; j < i; ++j){
            v.push_back(i);
        }
    }

    for(int i = input1 - 1; i <= input2 - 1; i++){
        sum += v.at(i);
    }

    cout << sum << endl;
    
}