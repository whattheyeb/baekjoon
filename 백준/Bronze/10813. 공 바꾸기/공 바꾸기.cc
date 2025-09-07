#include <iostream>
#include <vector>

using namespace std;

int main(){
    int basket_num, cng_cnt;

    cin >> basket_num >> cng_cnt;

    vector<int> basket(basket_num);

    for(int i = 0; i < basket_num; i++){
        basket[i] = i+1;
    } 

    int num1, num2;
    for(int i = 0; i < cng_cnt; i++){
        cin >> num1 >> num2;
        swap(basket[num1 - 1], basket[num2 - 1]);
    }

    for(int i = 0; i < basket_num; i++){
        cout << basket[i] << " ";
    }
    cout << "\n";
}