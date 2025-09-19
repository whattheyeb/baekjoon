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

    int N;

    cin >> N;
    vector<int> A(N);
    for(int i = 0; i < N; i++){
        cin >> A[i];
    }

    sort(A.begin(), A.end());

    int M;
    cin >> M;
    int input;
    vector<bool> isHere(M);
    for(int i = 0; i < M; i++){
        cin >> input;
        if(binarySearch(A, input) != -1){
            isHere[i] = true;
        }else{
            isHere[i] = false;
        }
    }

    for(int i : isHere){
        cout << i << "\n";
    }
}