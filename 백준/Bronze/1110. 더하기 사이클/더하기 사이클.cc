#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;

    int cnt = 1;
    int new_num = 0;
    if(n >= 10){
        new_num = (n % 10) * 10 + (n / 10 + n % 10) % 10;
    }else{
        new_num = n * 10 + n;
    }
    while(new_num != n){
        if(new_num >= 10){
            new_num = (new_num % 10) * 10 + (new_num / 10 + new_num % 10) % 10;
        }else{
            new_num = new_num * 10 + new_num;
        }
        cnt++;
    }
    cout << cnt << '\n';
}