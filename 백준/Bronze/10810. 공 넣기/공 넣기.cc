#include <iostream>
#include <vector>

using namespace std;

int main(){

    int basket_cnt, input_cnt;
    cin >> basket_cnt >> input_cnt;
    
    vector<int> basket(basket_cnt);

    int basket1, basket2, ball_num;
    for(int i = 0; i < input_cnt; i++){
        cin >> basket1 >> basket2 >> ball_num;
        for(int j = basket1 - 1; j <= basket2 - 1; j++){
            basket[j] = ball_num;
        }
    }

    for(int i = 0; i < basket_cnt; i++){
        cout << basket[i] << " ";
    }
    cout << "\n";
}