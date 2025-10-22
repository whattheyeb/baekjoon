#include <iostream>
#include <unordered_map>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

bool compare(string& a, string& b){
    return a > b;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    // key : string, value : bool 인 해시 테이블
    unordered_map<string, bool> employee;

    int n;
    cin >> n;

    for(int i = 0; i < n; i++){
        string name;
        string inNout;
        cin >> name >> inNout;
        if(inNout == "enter"){
            employee[name] = 1;
        }else{
            if(employee.find(name) != employee.end()){
                if(employee[name] == 1) employee.erase(name);
            }
        }
    }

    vector<string> names;
    for(auto& pair : employee)
        names.push_back(pair.first);

    sort(names.begin(), names.end(), compare);
    for(auto& name : names)
        cout << name << '\n';
}

