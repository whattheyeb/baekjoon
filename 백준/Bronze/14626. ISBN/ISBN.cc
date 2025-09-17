#include <iostream>

using namespace std;

int main(){
    string isbn;

    cin >> isbn;

    int mod3[10] = {3, 6, 9, 2, 5, 8, 1, 4, 7, 0};

    int sum = 0;
    int damagedIdx;
    for(int i = 0; i < isbn.size(); i++){
        if(isbn[i] != '*'){
            if((i + 1) % 2 == 0){
                sum += (isbn[i] - '0') * 3;
            }else{
                sum += isbn[i] - '0';
            }
        }else{
            damagedIdx = i;
        }
    }

    int output = 10 - (sum % 10);
    if (output == 10) output = 0;

    if (damagedIdx != -1) {
        if ((damagedIdx + 1) % 2 == 0) {
            for (int i = 0; i < 10; i++) {
                if ((sum + i * 3) % 10 == 0) {
                    output = i;
                    break;
                }
            }
        } else {
            for (int i = 0; i < 10; i++) {
                if ((sum + i) % 10 == 0) {
                    output = i;
                    break;
                }
            }
        }
    }

    cout << output << '\n';
}
