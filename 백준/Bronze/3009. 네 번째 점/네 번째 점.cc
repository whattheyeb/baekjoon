#include <iostream>
#include <vector>

using namespace std;

int main(){
    vector<int> x(3), y(3);
    for(int i = 0; i < 3; i++){
        cin >> x[i] >> y[i];
    }
    int width, height;
    if(x[0] == x[1]){
        width = x[2];
    }else{
        if(x[0] == x[2]){
            width = x[1];
        }else{
            width = x[0];
        }
    }
    if(y[0] == y[1]){
        height = y[2];
    }else{
        if(y[0] == y[2]){
            height = y[1];
        }else{
            height = y[0];
        }
    }
    cout << width << " " << height << "\n";
}