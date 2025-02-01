#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int N;
    cin >> N;
    
    vector<int> firstLetterCount(26, 0);
    
    for (int i = 0; i < N; i++) {
        string name;
        cin >> name;
        firstLetterCount[name[0] - 'a']++;
    }
    
    string result = "";
    
    for (int i = 0; i < 26; i++) {
        if (firstLetterCount[i] >= 5) {
            result += (char)(i + 'a');
        }
    }
    
    if (result.empty()) {
        cout << "PREDAJA" << endl;
    } else {
        cout << result << endl;
    }
    
    return 0;
}
