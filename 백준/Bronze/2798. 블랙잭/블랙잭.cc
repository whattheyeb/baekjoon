#include <iostream>
#include <vector>

using namespace std;

void combinationSum(int depth, int next, int n, int r, int arr1[], int input[], int M, int* maxi){
    int sum;
    if(depth == r){
        sum = 0;
        for(int i = 0; i < 3; i++){
            sum += arr1[i];
        }
        if((*maxi <= sum) && (sum <= M)){
            *maxi = sum;
        }
        return;
    }

    for(int i = next; i < n; i++){
        arr1[depth] = input[i];
        combinationSum(depth + 1, i + 1, n, r, arr1, input, M, maxi);
    }
}

int main(){
    // 김정인 : 입력 N 장의 카드, 숫자 M, 3장의 카드를 고름, M과 최대한 가깝게
    int N, M;
    cin >> N >> M;
    int num[100];
    int numCombi[100];
    for(int i = 0; i < N; i++){
        cin >> num[i];
    }

    int maxi = 0;
    int sum = 0;
    combinationSum(0, 0, N, 3, numCombi, num, M, &maxi);
    cout << maxi << '\n';
}