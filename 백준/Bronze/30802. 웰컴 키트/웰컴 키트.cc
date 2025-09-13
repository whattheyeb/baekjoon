#include <iostream>
#include <vector>

using namespace std;

int main(){
    // S, M, L, XL, XXL, XXXL 6가지 사이즈
    vector<int> tSize(6);
    // 펜의 묶음수
    int P;
    // 티셔츠 수
    int T;
    // 참가자 수
    int N;

    cin >> N;
    for(int i = 0; i < tSize.size(); i++){
        cin >> tSize[i];
    }
    cin >> T >> P;

    int Pbundle, Pcnt;
    vector<int> Tbundle(tSize.size(), 0);
    
    for(int i = 0; i < tSize.size(); i++){
        if(tSize[i] % T != 0){
            Tbundle[i] = tSize[i] / T + 1; 
        }else{
            Tbundle[i] = tSize[i] / T;
        }
    }

    int Tsum = 0;
    for(int i = 0; i < Tbundle.size(); i++){
        Tsum += Tbundle[i];
    }
    cout << Tsum << "\n" << N / P << " " << N % P << "\n";

}