#include <iostream>

using namespace std;

int main(){
    int piano[8];
    int ascending_order = 0;
    int descending_order = 0;

    for(int i = 0; i < 8; i++){
        cin >> piano[i];
    }
    for(int i = 0; i < 8; i++){
        if(piano[i] == i+1){
            ascending_order = 1;
        }else{
            ascending_order = 0;
            break;
        }
    }
    int c = 1;
    for(int i = 7; i >= 0; i--){
        if(piano[i] == c){
            descending_order = 1;
        }else{
            descending_order = 0;
            break;
        }
        c++;
    }

    if(ascending_order == 1){
        cout << "ascending" << endl;
    }else if(descending_order == 1){
        cout << "descending" << endl;
    }else{
        cout << "mixed" << endl;
    }

}