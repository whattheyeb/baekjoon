#include <iostream>
#include <queue>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n;
    cin >> n;
    queue<int> q;
    string order;
    int x;
    for(int i = 0; i < n; i++){
        cin >> order;
        if(order == "push"){
            cin >> x;
            q.push(x);
        }else if(order == "pop"){
            if(q.empty()){
                cout << -1 << '\n';
            }else{
                cout << q.front() << '\n';
                q.pop();
            }
        }else if(order == "size"){
            cout << q.size() << '\n';
        }else if(order == "empty"){
            if(q.empty()){
                cout << 1 << '\n';
            }else{
                cout << 0 << '\n';
            }
        }else if(order == "front"){
            if(q.empty()){
                cout << -1 << '\n';
            }else{
                cout << q.front() << '\n';
            }
        }else if(order == "back"){
            if(q.empty()){
                cout << -1 << '\n';
            }else{
                cout << q.back() << '\n';
            }
        }

    }
}