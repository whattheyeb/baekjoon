#include <iostream>
#include <vector>

using namespace std;

int main(){
    //n명의 승객
    //정류장마다 1/2 절반과 반명 0.5이 내림
    //총 k개의 정류장에서 승객이 내렸고, 최종적으로 0명이 남음
    // 맨 처음 버스에 타고있던 승객은 몇명?
    int T;
    cin >> T;
    
    vector<int> results;

    while(T--){
        int k;
        int n = 0;
        cin >> k;
        // result = n - 1/2 * n - 0.5
        for(int i = 0; i < k; i++){
            n = 2*n + 1;
        }

        results.push_back(n);
    }

    for(int result : results){
        cout << result << endl;
    }
}