#include <iostream>

using namespace std;

void isRight(int max, int a1, int b1){
    if((max * max) == (a1 * a1 + b1 * b1)){
        cout << "right" << "\n";
    }else{
        cout << "wrong" << "\n";
    }
}

int main(){
    int len1, len2, len3;
    int max;
    do{
        cin >> len1 >> len2 >> len3;
        if(len1 == 0 && len2 == 0 && len3 == 0){
            break;
        }
        max = len1;
        if(len1 < len2){
            max = len2;
            if(len2 < len3) max = len3;
        }else if(len1 < len3){
            max = len3;
            if(len3 < len2) max = len2;
        }
        if(max == len1){
            isRight(max, len2, len3);
        }else if(max == len2){
            isRight(max, len1, len3);
        }else if(max == len3){
            isRight(max, len1, len2);
        }
    }while(len1 != 0 || len2 != 0 || len3 != 0);
}