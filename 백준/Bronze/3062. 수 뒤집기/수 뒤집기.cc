#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

bool isPalindrome(int num) {
    string str = to_string(num);
    string reverse_str = str;
    reverse(reverse_str.begin(), reverse_str.end());
    return str == reverse_str;
}

int main() {
    int T;
    cin >> T;  // 테스트 케이스 개수 입력

    while (T--) {
        int input, copy;
        int reversed_num = 0;
        cin >> input;

        copy = input;
        while (copy > 0) {
            int digit = copy % 10;
            reversed_num = reversed_num * 10 + digit;
            copy /= 10;
        }

        int sum = input + reversed_num;
        if (isPalindrome(sum)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
