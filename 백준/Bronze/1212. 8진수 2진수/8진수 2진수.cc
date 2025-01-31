#include <iostream>
#include <string>

using namespace std;

int main() {
    string octal;
    cin >> octal;

    string binary = "";

    for (int i = 0; i < octal.size(); i++) {
        int digit = octal[i] - '0';  

        string binPart = "";
        for (int j = 0; j < 3; j++) {
            binPart = char('0' + (digit % 2)) + binPart;
            digit /= 2;
        }

        if (i == 0) {
            binary += to_string(stoi(binPart));
        } else {
            binary += binPart;
        }
    }

    cout << binary << endl;

    return 0;
}
