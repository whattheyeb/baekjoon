#include <iostream>
#include <vector>

using namespace std;

int main(){
    int a = 1;
    string input;
    int isNum = -1;
    vector <int> num;
    for(int i = 0; i < 3; i++){
        cin >> input;
        if((input != "Fizz") && (input != "Buzz") && (input != "FizzBuzz")){
            isNum = i;
            num.clear();
            for(int j = input.size() - 1; j >= 0; j--){
                num.push_back(input[j] - '0');
            }
        }
    }

    long long int numHint = 0;
    long long int tenPow = 1;
    for(int i = 0; i < num.size(); i++){
        numHint += num[i] * tenPow;
        tenPow *= 10;
    }

    numHint += 3 - isNum;
    if(numHint % 3 == 0 && numHint % 5 == 0){
        cout << "FizzBuzz" << '\n';
    }else if(numHint % 3 == 0 && numHint % 5 != 0){
        cout << "Fizz" << '\n';
    }else if(numHint % 3 != 0 && numHint % 5 == 0){
        cout << "Buzz" << '\n';
    }else{
        cout << numHint << '\n';
    }


}