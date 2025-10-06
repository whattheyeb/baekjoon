#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int binarySearch(vector<int> &arr, int x){
    int low = 0;
    int high = arr.size() - 1;

    while(low <= high){
        int mid = low + (high - low) / 2;
        if(arr[mid] == x)
            return mid;
        if(arr[mid] < x)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return -1;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    
    // 벡터 선언
    vector<int> arr(n);
    vector<int> arrCopy(n);

    // 좌표 입력받기
    for(int i = 0; i < n; i++){
        cin >> arr[i];
        arrCopy[i] = arr[i];
    }

    // 좌표 정렬하기
    sort(arrCopy.begin(), arrCopy.end());

    // 중복 삭제하기
    arrCopy.erase(unique(arrCopy.begin(), arrCopy.end()), arrCopy.end());
    
    vector<int> cnt(n, 0);
    
    for(int i = 0; i < n; i++){
        int num = binarySearch(arrCopy, arr[i]);
        cnt[i] = num;
    }

    for(int c : cnt){
        cout << c << " ";
    }
    cout << '\n';

}