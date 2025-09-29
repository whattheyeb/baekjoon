#include <iostream>
#include <vector>

using namespace std;

int main(){
    int T, C;
    cin >> T;
    
    int money[4] = {25, 10, 5, 1};
    for(int i = 0; i < T; i++){
        vector<int> cnt(4, 0);
        cin >> C;
        while(C != 0){
            for(int j = 0; j < 4; j++){
                cnt[j] += C / money[j];
                C %= money[j];
            }
        }
        for(int j = 0; j < 4; j++){
            cout << cnt[j] << " ";
        }
        cout << '\n';
    }
    
}