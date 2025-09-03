#include <iostream>

// const int 를 쓰는 것이 c++ 스타일에 더 가깝다
const int MAX_SIZE = 10000;

using namespace std;

int main(){
    int size, change_cnt;
    cin >> size >> change_cnt;

    int arr[MAX_SIZE];

    for(int i = 0; i < size; i++){
        // 바로 cin 으로 입력해도됨
        cin >> arr[i];
    }

    int max_idx;
    int temp;
    int cnt = 0;
    int pre_i, pre_max;
    int output1, output2;
    for(int i = size - 1; i > 0; i--){
        max_idx = i;
        for(int j = i - 1; j >= 0; j--){
            if(arr[max_idx] < arr[j]){
                max_idx = j;
            }
        }
        if(i != max_idx){
            pre_i = arr[i];
            pre_max = arr[max_idx];
            temp = arr[i];
            arr[i] = arr[max_idx];
            arr[max_idx] = temp;
            cnt++;
            if(cnt == change_cnt){
                output1 = pre_i;
                output2 = pre_max;
            }
        }
    }

    // for(int i = 0; i < size; i++){
    //     cout << arr[i] << " ";
    // }

    if(cnt < change_cnt){
        cout << -1 << endl;
    }else{
        cout << output1 << " " << output2 << endl;
    }

}