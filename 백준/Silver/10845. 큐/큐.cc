#include <iostream>
#include <vector>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n;
    cin >> n;
    vector<int> queueN;
    int top = 0;
    for(int i = 0; i < n; i++){
        string menu;
        cin >> menu;
        if(menu == "push"){
            int input;
            cin >> input;
            queueN.push_back(input);
        }else if(menu == "pop"){
            if(queueN.empty()) cout << -1 << '\n';
            else{
                cout << queueN.front() << '\n';
                queueN.erase(queueN.begin());
            }
        }else if(menu == "size"){
            cout << queueN.size() << '\n';
        }else if(menu == "empty"){
            if(queueN.empty()) cout << 1 << '\n';
            else cout << 0 << '\n';
        }else if(menu == "front"){
            if(queueN.empty()) cout << -1 << '\n';
            else cout << queueN.front() << '\n';
        }else if(menu == "back"){
            if(queueN.empty()) cout << -1 << '\n';
            else cout << queueN.back() << '\n';
        }
    }
}