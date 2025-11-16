#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
#include <cmath>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    // 1. 산술평균 : 합 / 개수
    // 2. 중앙값 : 중앙에 위치하는 값
    // 3. 최빈값 : 가장 많이 나타나는 값
    // 4. N개의 수들 중 최댓값과 최솟값의 차이

    // 수들의 합
    double sum = 0;
    // 수의 개수
    int n;
    cin >> n;

    // 각 수들의 빈도수
    unordered_map<int, int> numCnt;

    // 수 저장배열
    vector<int> orderArr(n);

    int num;
    for(int i = 0; i < n; i++){
        cin >> num;
        sum += num;
        orderArr[i] = num;
        
        auto it = numCnt.find(num);
        if(it != numCnt.end()){
            numCnt[num]++;
        }else{
            numCnt[num] = 1;
        }
    }
    sort(orderArr.begin(), orderArr.end());

    // 최빈값 구하기
    int maxCnt = 0;
    vector<int> modeNumArr;
    for(auto it = numCnt.begin(); it != numCnt.end(); ++it){
        if((it->second) > maxCnt){
            maxCnt = it->second;
        }
    }
    for(auto it = numCnt.begin(); it != numCnt.end(); ++it){
        if((it->second) == maxCnt){
            modeNumArr.push_back(it->first);
        }
    }

    // debugging
    // cout << maxCnt << " maxCnt\n";
    // for(int m : modeNumArr){
    //     cout << m << ' ';
    // }
    // cout << '\n';

    int modeN;
    if(modeNumArr.size() > 1){
        sort(modeNumArr.begin(), modeNumArr.end());
        modeN = modeNumArr[1];
    }else{
        modeN = modeNumArr.front();
    }
    

    double tmp = sum / (double)n;
    int avg = round(tmp);
    int center = orderArr[n / 2];
    int range = orderArr[n - 1] - orderArr[0];

    cout << avg << '\n' << center << '\n' << modeN << '\n' << range << '\n';
}