#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<int> st;
    string cmd;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> cmd;
        if (cmd == "1") {
            cin >> x;
            st.push_back(x);
        } else if (cmd == "2") {
            if (st.empty()) cout << -1 << '\n';
            else { cout << st.back() << '\n'; st.pop_back(); }
        } else if (cmd == "3") cout << st.size() << '\n';
        else if (cmd == "4") cout << st.empty() << '\n';
        else if (cmd == "5") {
            if (st.empty()) cout << -1 << '\n';
            else cout << st.back() << '\n';
        }
    }
}
