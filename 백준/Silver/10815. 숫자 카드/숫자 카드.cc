#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

bool binarySearch(vector<int> &a, int val){
    int low = 0;
    int high = a.size() - 1;
    while(low <= high){
        int mid = low + ((high - low) / 2);
        if(a[mid] == val){
            return 1;
        }else if(a[mid] < val){
            low = mid + 1;
        }else{
            high = mid - 1;
        }
    }
    return 0;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    // 상근이의 숫자카드 개수
    int n;
    cin >> n;
    vector<int> card(n);
    // 숫자카드 입력
    for(int i = 0; i < n; i++){
        cin >> card[i];
    }

    sort(card.begin(), card.end());

    // 숫자카드 개수
    int m;
    cin >> m;
    int num;
    for(int i = 0; i < m; i++){
        cin >> num;
        // 가지고 있으면 1을,
        cout << binarySearch(card, num) << " ";
    }
    cout << '\n';


}