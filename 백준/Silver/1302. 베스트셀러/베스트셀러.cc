#include <iostream>
#include <map>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int N;
    cin >> N;

    map<string, int> cnt;

    for (int i = 0; i < N; ++i) {
        string title;
        cin >> title;
        cnt[title]++;
    }

    int max_cnt = 0;
    for (const auto& entry : cnt) {
        if (entry.second > max_cnt) {
            max_cnt = entry.second;
        }
    }

    vector<string> bestsellers;
    for (const auto& entry : cnt) {
        if (entry.second == max_cnt) {
            bestsellers.push_back(entry.first);
        }
    }

    sort(bestsellers.begin(), bestsellers.end());

    cout << bestsellers.front() << endl;

    return 0;
}
