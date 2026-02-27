#include <iostream>

using namespace std;

int main(){
    int x, y;
    cin >> x >> y;
    // x월 y일이 1월 1일과 얼마나(몇일) 떨어져있는지 알아낸다.
    int day = 0;
    // x월일때의 수 
    day += y - 1;
    // 1월부터 x-1월까지의 일수를 모두 더한다. 
    for(int i = 1; i < x; i++){
        if(i == 1 || i == 3 || i == 5 || i == 7 || i == 8 || i == 10){
            day += 31;
        }else if(i == 2){
            day += 28;
        }else{
            day += 30;
        }
    }
    if(day % 7 == 0){
        cout << "MON\n";
    }else if(day % 7 == 1){
        cout << "TUE\n"; 
    }else if(day % 7 == 2){
        cout << "WED\n";
    }else if(day % 7 == 3){
        cout << "THU\n";
    }else if(day % 7 == 4){
        cout << "FRI\n";
    }else if(day % 7 == 5){
        cout << "SAT\n";
    }else{
        cout << "SUN\n";
    }
    // cout << day << '\n';
}