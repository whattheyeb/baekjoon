#include <iostream>

using namespace std;

int main(){
    int width, height;
    cin >> width >> height;

    int a1[100][100];
    int a2[100][100];
    int output[100][100];

    for(int i = 0; i < height; i++){
        for(int j = 0; j < width; j++){
            cin >> a1[i][j];
        }
    }

    for(int i = 0; i < height; i++){
        for(int j = 0; j < width; j++){
            cin >> a2[i][j];
            output[i][j] = a1[i][j] + a2[i][j];
        }
    }

    for(int i = 0; i < height; i++){
        for(int j = 0; j < width; j++){
            if(j < width - 1){
                cout << output[i][j] << " ";
            }else{
                cout << output[i][j];
            }
        }
        cout << endl;
    }
}