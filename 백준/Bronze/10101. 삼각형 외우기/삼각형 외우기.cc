#include <iostream>

using namespace std;

int main(){
    int angle[3];
    int sum = 0;

    for(int i = 0; i < 3; i++){
        cin >> angle[i];
        sum += angle[i];
    }
    if(angle[0] == 60 && angle[1] == 60 && angle[2] == 60 && (sum == 180)){
        cout << "Equilateral" << "\n";
    }else if(sum != 180){
        cout << "Error" << "\n";
    }else{
        if((angle[0] == angle[1]) || (angle[1] == angle[2]) || (angle[0] == angle[2])){
            cout << "Isosceles" << "\n";
        }else{
            cout << "Scalene" << "\n";
        }
    }


}