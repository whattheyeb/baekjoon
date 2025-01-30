#include <iostream>
#include <sstream>
#include <vector>

using namespace std;

int main(){
    string kda;
    vector<int> numbers;

    string segment;

    getline(cin, kda);
    stringstream ss(kda);

    while(getline(ss, segment, '/')){
        numbers.push_back(stoi(segment));
    }

    if((numbers[0] + numbers[2] < numbers[1]) || (numbers[1] == 0)){
        cout << "hasu" << endl;
    }else{
        cout << "gosu" << endl;
    }

}