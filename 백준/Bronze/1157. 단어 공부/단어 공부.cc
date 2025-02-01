#include <iostream>
#include <vector>
#include <cctype>

using namespace std;

int main() {
    string word;
    cin >> word;
    
    vector<int> count(26, 0);
    
    for (char c : word) {
        count[toupper(c) - 'A']++;
    }
    
    int maxCount = 0;
    char result = '?';
    
    for (int i = 0; i < 26; i++) {
        if (count[i] > maxCount) {
            maxCount = count[i];
            result = 'A' + i;
        } else if (count[i] == maxCount) {
            result = '?';
        }
    }
    
    cout << result << endl;
    
    return 0;
}
