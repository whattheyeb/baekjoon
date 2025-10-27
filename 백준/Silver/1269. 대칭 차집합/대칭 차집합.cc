#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b;
    cin >> a >> b;

    // a 집합의 원소를 입력받는 map
    unordered_map<int, bool> aGroup;
    for(int i = 0; i < a; i++){
        int inputA;
        cin >> inputA;
        aGroup[inputA] = false;
    }

    unordered_map<int, int> bGroup;
    for(int i = 0; i < b; i++){
        int inputB;
        cin >> inputB;
        if(aGroup.find(inputB) != aGroup.end()){
            bGroup[inputB] = true;
            aGroup[inputB] = true;
        }else{
            bGroup[inputB] = false;
        }
    }

    int cnt = 0;
    for(auto it = aGroup.begin(); it != aGroup.end(); ++it){
        if(!it -> second) cnt++;
    }

    for(auto it = bGroup.begin(); it != bGroup.end(); ++it){
        if(!it -> second) cnt++;
    }

    cout << cnt << '\n';

}