#include <iostream>

using namespace std;

long long int fibonacchi(long long int n){
    if(n == 0){
        return 0;
    }else if(n == 1){
        return 1;
    }else{
        return fibonacchi(n - 1) + fibonacchi(n - 2);
    }
}

int main(){
    int x;
    cin >> x;
    cout << fibonacchi(x) << '\n';
}