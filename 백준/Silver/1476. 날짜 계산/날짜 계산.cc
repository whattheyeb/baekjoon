#include <iostream>

using namespace std;

// 수 3개를 이용해서 연도를 나타냄 - 지구 E, 태양 s, 달 m

int main(){
    int earth, sun, moon;
    cin >> earth >> sun >> moon;

    int output = 0;
    if(sun == moon && moon <= 19 && (sun - earth) % 15 == 0){
        output = sun;
    }else if(sun >= 20 && sun <= 28){
        if((sun - earth) % 15 == 0 && (sun - moon) % 19 == 0){
            output = sun;
        }
    }else if(earth == 1 && sun == 1 && moon == 1){
        output = 1;
    }
    
    if(output == 0){
        output = 29;
        while(!((output - earth) % 15 == 0 && (output - sun) % 28 == 0 
        && (output - moon) % 19 == 0)){
            output++;
        }
    }

    cout << output << '\n';

}