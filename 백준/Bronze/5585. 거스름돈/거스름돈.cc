#include <iostream>

using namespace std;

int main(){
    //거스름돈 개수가 가장 적게 잔돈을 줌 500 100 50 10 5 1
    //물건을 사고 1000엔 지폐를 냄
    //잔돈의 개수를 구해라
    int input;
    int remain_m;
    int count = 0;

    cin >> input;

    remain_m = 1000 - input;
    int coins[] = {500, 100, 50, 10, 5, 1};
    for(int coin : coins){
        count += remain_m / coin;
        remain_m %= coin;
    }

    cout << count << endl;
}