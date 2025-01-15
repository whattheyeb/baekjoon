#include <iostream>
#include <string>
using namespace std;

int main() {
    string grade;
    cin >> grade;

    double gpa;

    if (grade == "A+") gpa = 4.3;
    else if (grade == "A0") gpa = 4.0;
    else if (grade == "A-") gpa = 3.7;
    else if (grade == "B+") gpa = 3.3;
    else if (grade == "B0") gpa = 3.0;
    else if (grade == "B-") gpa = 2.7;
    else if (grade == "C+") gpa = 2.3;
    else if (grade == "C0") gpa = 2.0;
    else if (grade == "C-") gpa = 1.7;
    else if (grade == "D+") gpa = 1.3;
    else if (grade == "D0") gpa = 1.0;
    else if (grade == "D-") gpa = 0.7;
    else if (grade == "F") gpa = 0.0;
    cout << fixed;
    cout.precision(1);
    cout << gpa << endl;

    return 0;
}
