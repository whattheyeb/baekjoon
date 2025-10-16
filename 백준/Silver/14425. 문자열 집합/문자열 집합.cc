#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool isInGroup(string str1, string str2){
    if(str1 == str2){
        return true;
    }else{
        return false;
    }
}

bool binarySearch(vector<string>& arr, string target){
    if(arr.size() == 1){
        return (arr[0] == target);
    }

    int left = 0;
    int right = arr.size() - 1;

    while(left <= right){
        int mid = (left + right) / 2;
        if(target == arr[mid]) return true;
        else if(target < arr[mid]) right = mid - 1;
        else left = mid + 1;
    }
    return false;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    // 집합 S 안에 n개의 문자열이 있음
    int n;
    // 검사해야하는 문자열 m개
    int m;
    cin >> n >> m;
    
    vector<string> group(n);
    string input;
    for(int i = 0; i < n; i++){
        cin >> input;
        group.push_back(input);
    }

    sort(group.begin(), group.end());
    
    string checkStr;
    int cnt = 0;
    for(int i = 0; i < m; i++){
        cin >> checkStr;
        if(binarySearch(group, checkStr)) cnt++;
    }
    cout << cnt << '\n';
}
