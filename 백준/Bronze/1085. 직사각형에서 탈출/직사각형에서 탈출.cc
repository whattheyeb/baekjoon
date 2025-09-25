#include <iostream>

using namespace std;

int main(){
    
    int x, y, w, h;
    cin >> x >> y >> w >> h;
    int len[4] = {x, y, h-y, w-x};
    int min = len[0];
    for(int i = 0; i < 4; i++){
        if(min >= len[i]){
            min = len[i];
        }
    }
    cout << min << "\n"; 
}