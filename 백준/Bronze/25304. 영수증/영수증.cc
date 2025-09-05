#include <iostream>

using namespace std;

int main(){
    int total_x, kind_n;
    cin >> total_x;
    cin >> kind_n;

    int sum = 0;
    int price, cnt;
    for(int i = 0; i < kind_n; i++){
        cin >> price >> cnt;
        sum += price * cnt;
    }

    if(total_x == sum){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
}