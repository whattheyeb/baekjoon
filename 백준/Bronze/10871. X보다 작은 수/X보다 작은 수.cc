#include <iostream>

using namespace std;

const int MAX_SIZE = 10000;

int main(){
    int arr_size, num;
    cin >> arr_size >> num;

    int arr[MAX_SIZE];
    int output_arr[MAX_SIZE];

    int cnt = 0;
    int input;
    for(int i = 0; i < arr_size; i++){
        cin >> arr[i];
        if(arr[i] < num){
            output_arr[cnt] = arr[i];
            cnt++; 
        }  
    }

    for(int j = 0; j < cnt; j++){
        cout << output_arr[j] << " ";
    }

}