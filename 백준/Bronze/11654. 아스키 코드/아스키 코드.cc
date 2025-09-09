#include <iostream>

using namespace std;

int main(){
    char input;
    cin >> input;

    int ascii_value = static_cast<int>(input);
    cout << ascii_value << "\n";
}