#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n;
    int sum;
    vector<int> divisor;
    do{
        divisor.clear();
        sum = 0;
        cin >> n;
        if(n == -1) break;

        for(int i = 1; i < n; i++){
            if(n % i == 0){
                divisor.push_back(i);
                sum += i;
            }
        }
        if(n == sum){
            cout << n << " = ";
            for(int i = 0; i < divisor.size() - 1; i++){
                cout << divisor[i] << " + ";
            } 
            cout << divisor[divisor.size() - 1] << "\n";
        }else{
            cout << n << " is NOT perfect." << "\n";
        }
    }while(n != -1);
}