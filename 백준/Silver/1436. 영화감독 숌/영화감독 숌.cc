#include <iostream>
#include <string>

using namespace std;

int main(){
    // 666이 들어간 수를 찾지말고. N번째로 작은 종말의 수를 찾을때까지 돌려보자
    int N;
    cin >> N;
    int num = 666;
    string movie666;
    int check;
    while(N != 0){
        check = to_string(num).find("666");
        if(check != string::npos){
            movie666 = to_string(num);
            N--;
        }
        num++;
    }
    cout << movie666 << endl;

}