#include <iostream>
#include <vector>

using namespace std;

int main(){
    vector<int> v(9);
    int max_idx = 0;
    for(int i = 0; i < v.size(); i++){
        cin >> v[i];
        if(v[max_idx] < v[i]){
            max_idx = i;
        }
    }
    cout << v[max_idx] << "\n" << max_idx + 1 << "\n";
}