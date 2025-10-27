#include <iostream>
#include <vector>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n;
    cin >> n;
    vector<int> stacK;
    string menu;
    int top = 0;
    for(int i = 0; i < n; i++){
        cin >> menu;
        if(menu == "push"){
            int input;
            cin >> input;
            stacK.push_back(input);
            top++;
        }else if(menu == "top"){
            if(top == 0) cout << -1 << '\n';
            else cout << stacK[stacK.size() - 1] << '\n';
        }else if(menu == "pop"){
            if(top == 0) cout << -1 << '\n';
            else{
                cout << stacK[stacK.size() - 1] << '\n';
                stacK.pop_back();
                top--;              
            }
        }else if(menu == "size"){
            cout << stacK.size() << '\n';
        }else if(menu == "empty"){
            if(stacK.empty()) cout << 1 << '\n';
            else cout << 0 << '\n';
        }
    }
}