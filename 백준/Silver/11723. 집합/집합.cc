#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int m;
    cin >> m;

    vector<int> groupS;

    for(int i = 0; i < m; i++){
        
        string input;
        cin >> input;

        // add x : S에 x를 추가함 (x가 이미 있으면 무시) (push 와 비슷)
        if(input == "add"){
            int x;
            cin >> x;
            if(find(groupS.begin(), groupS.end(), x) == groupS.end()){
                groupS.push_back(x);
            }
        }
        // remove x : S에서 x를 제거함 (x가 없으면 무시)
        else if(input == "remove"){
            int x;
            cin >> x;
            auto it = find(groupS.begin(), groupS.end(), x);
            if(it != groupS.end()){
                groupS.erase(it);
            }
        }
        // check x : S에 x가 있으면 1, 없으면 0
        else if(input == "check"){
            int x;
            cin >> x;
            auto it = find(groupS.begin(), groupS.end(), x);
            if(it != groupS.end()){
                cout << 1 << '\n';
            }else{
                cout << 0 << '\n';
            }
        }
        // toggle x : S에 x가 있으면 x를 제거하고, 없으면 x를 추가
        else if(input == "toggle"){
            int x;
            cin >> x;
            auto it = find(groupS.begin(), groupS.end(), x);
            if(it != groupS.end()){
                groupS.erase(it);
            }else{
                groupS.push_back(x);
            }
        }
        // all : S를 {1, 2, ..., 20} 로 바꿈    
        else if(input == "all"){
            groupS.clear();
            for(int i = 1; i <= 20; i++){
                groupS.push_back(i);
            }
        }
        // empty : S를 공집합으로 바꿈 (empty와 비슷)
        else if(input == "empty"){
            groupS.clear();
        }
        // 디버깅용 print
        else if(input == "print"){
            cout << "groupS : ";
            for(int g : groupS){
                cout << g << ' ';
            }
            cout << endl;
        }
    } 

}