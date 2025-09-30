#include <iostream>
#include <vector>

using namespace std;

void merge(vector<int>& arr, int left, int mid, int right){
    int n1 = mid - left + 1;
    int n2 = right - mid;

    vector<int> l(n1), r(n2);

    for(int i = 0; i < n1; i++)
        l[i] = arr[left + i];
    for(int j = 0; j < n2; j++)
        r[j] = arr[mid+ 1 + j];

    int i = 0, j = 0;
    int k = left;

    while(i < n1 && j < n2){
        if(l[i] <= r[j]){
            arr[k] = l[i];
            i++;
        }else{
            arr[k] = r[j];
            j++;
        }
        k++;
    }

    while(i < n1){
        arr[k] = l[i];
        i++;
        k++;
    }

    while(j < n2){
        arr[k] = r[j];
        j++;
        k++;
    }
}

void mergeSort(vector<int>& arr, int left, int right){
    if(left >= right)
        return;
    int mid = left + (right - left) / 2;
    mergeSort(arr, left, mid);
    mergeSort(arr, mid+1, right);
    merge(arr, left, mid, right);
}

int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    mergeSort(arr, 0, arr.size() - 1);
    for(int i : arr){
        cout << i << '\n';
    }
}