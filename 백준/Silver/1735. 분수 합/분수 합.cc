#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int a1, b1;
    cin >> a1 >> b1;

    int a2, b2;
    cin >> a2 >> b2;

    int num = 1;
    for(int i = 2; i <= min(b1, b2); i++){
        if(b1 % i == 0 && b2 % i == 0){
            if(num < i){
                num = i;
            }
        }
    }
    
    int mother = num * (b1 / num) * (b2 / num);
    int son = a1 * (mother / b1) + a2 * (mother / b2);

    int divider = 1;
    for(int i = 2; i <= min(mother, son); i++){
        if((mother % i == 0) && (son % i == 0)){
            if(divider < i){
                divider = i;
            }
        }
    }

    son /= divider;
    mother /= divider;
    
    cout << son << " " << mother << endl;
}