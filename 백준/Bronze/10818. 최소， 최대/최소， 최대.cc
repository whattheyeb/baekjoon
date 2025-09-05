#include <iostream>
#include <vector>

using namespace std;

int main(){
    int cnt;
    cin >> cnt;
    vector<int> v(cnt);

    for(int i = 0; i < cnt; i++){
        cin >> v[i];
    }

    int min, max = v[0];
    for(int i = 0; i < cnt; i++){
        if(min >= v[i]){
            min = v[i];
        }
        if(max <= v[i]){
            max = v[i];
        }
    }

    cout << min << " " << max << endl;
}