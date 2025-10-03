#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n, k;
    cin >> n >> k;
    vector<int> score(n);
    for(int i = 0; i < n; i++){
        cin >> score[i];
    }
    int minimum;
    for(int i = 0; i < n; i++){
        minimum = i;
        for(int j = i + 1; j < n; j++){
            if(score[minimum] >= score[j]){
                minimum = j;
            }
        }
        swap(score[minimum], score[i]);
    }
    cout << score[n - k] << '\n';

}