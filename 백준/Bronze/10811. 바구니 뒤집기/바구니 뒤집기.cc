#include <iostream>
#include <vector>

using namespace std;

int main(){
    int basket_num, reverse_cnt;
    cin >> basket_num >> reverse_cnt;

    vector<int> basket(basket_num + 1);

    int b_num1, b_num2;

    for(int i = 1; i <= basket_num; i++){
        basket[i] = i;
    }
    for(int i = 0; i < reverse_cnt; i++){
        cin >> b_num1 >> b_num2;
        int num = 0;
        for(int j = b_num1; j <= (b_num1 + b_num2)/2; j++){
            swap(basket[j], basket[b_num2 - num]);
            num ++;
        }
    }
        

    for(int i = 1; i <= basket_num; i++){
        cout << basket[i] << " ";
    }
    cout << "\n";
}