#include <iostream>

using namespace std;

int main(){
    int num[9][9];
    int max = 0;
    int x, y = 0;
    for(int i = 0; i < 9; i++){
        for(int j = 0; j < 9; j++){
            cin >> num[i][j];
            if(max <= num[i][j]){
                max = num[i][j];
                x = i + 1;
                y = j + 1;
            }
        }
    }

    cout << max << "\n" << x  << " " << y << "\n";
}