#include <iostream>
#include <vector>

using namespace std;

int main(){
    int N, B;
    cin >> N >> B;

    vector<char> changeN;
    string alphabet = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    string num = "0123456789";

    int remainder = N;
    int idx;
    while(N != 0){
        remainder = N % B;
        N /= B; 
        if(remainder > 9){
            changeN.push_back(alphabet[remainder - 10]);
        }else{
            changeN.push_back(num[remainder]);
        }
        
    }

    for(int i = changeN.size() - 1; i >= 0; i--){
        cout << changeN[i];
    }
    cout << '\n';


}