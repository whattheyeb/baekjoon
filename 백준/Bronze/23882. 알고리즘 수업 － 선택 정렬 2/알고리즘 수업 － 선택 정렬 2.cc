#include <iostream>

using namespace std;

const int MAX_SIZE = 10000;

int main(){
    int arr_size, cng_cnt;
    cin >> arr_size >> cng_cnt;
    
    int arr[MAX_SIZE];
    for(int i = 0; i < arr_size; i++){
        cin >> arr[i];
    }

    //뒤에서부터 체크
    //가장 큰 수를 찾음

    int max_idx;
    int cnt = 0;
    int output_arr[MAX_SIZE];
    for(int i = arr_size - 1; i > 0; i--){
        max_idx = i;
        for(int j = i - 1; j >= 0; j--){
            if(arr[max_idx] <= arr[j]){
                max_idx = j;
            }
        }

        int flag = 0;
        if(max_idx != i){
            cnt++;
            swap(arr[max_idx], arr[i]);
            if(cnt == cng_cnt){
                for (int k = 0; k < arr_size; k++){
                    output_arr[k] = arr[k];
                }
                break;
            }
        }
    }
    if(cnt < cng_cnt){
        cout << -1 << endl;
    }else{
        for(int i = 0; i < arr_size; i++){
            cout << output_arr[i] << " ";
        }
        cout << endl;
    }
}