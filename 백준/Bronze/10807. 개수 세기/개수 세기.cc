#include <iostream>

using namespace std;

int main(){
    int total_cnt;
    int input[100];

    int v;
    int v_cnt = 0;

    cin >> total_cnt;

    for(int i = 0; i < total_cnt; i++){
        cin >> input[i];
    }

    cin >> v;

    for(int i = 0; i < total_cnt; i++){
        if(input[i] == v)
            v_cnt++;
    }

    cout << v_cnt << endl;

}