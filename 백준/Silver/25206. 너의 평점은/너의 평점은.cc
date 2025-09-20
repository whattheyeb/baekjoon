#include <iostream>

using namespace std;

struct Grade{
    string subject;
    double credit;
    string rating;

};

double toCredit(string s){
    if(s == "A+")
        return 4.5;
    else if(s == "A0")
        return 4.0;
    else if(s == "B+")
        return 3.5;
    else if(s == "B0")
        return 3.0;
    else if(s == "C+")
        return 2.5;
    else if(s == "C0")
        return 2.0;
    else if(s == "D+")
        return 1.5;
    else if(s == "D0")
        return 1.0;
    else
        return 0.0;
}

int main(){
    int N = 20;
    Grade s[20];
    double sum = 0.0;
    double creditSum = 0.0;
    for(int i = 0; i < N; i++){
        cin >> s[i].subject >> s[i].credit >> s[i].rating;
        if(s[i].rating != "P"){
            sum += toCredit(s[i].rating) * s[i].credit;
            creditSum += s[i].credit;
        }else if(s[i].rating == "F"){
            sum += 0;
            creditSum += s[i].credit;
        }
    }
    if(creditSum == 0.0){
        creditSum = 1.0;
    }
    double result = static_cast<double>(sum) / creditSum;

    cout << result << "\n";
    
}