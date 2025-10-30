#include <iostream>
#include <vector>
#include <list>
#include <string>

using namespace std;


int main(){
    ios_base::sync_with_stdio(false);
    cout.tie(nullptr);
    int n, k;
    cin >> n >> k;

    list<int> circlePerson;
    for(int i = 1; i <= n; i++){
        circlePerson.push_back(i);
    }

    string erasedPerson;
    int cnt = 0;
    int person = 0;
    while(person != n){
        // 앞에서부터 사람 번호 체크
        int num = circlePerson.front();
        circlePerson.pop_front();
        cnt++;

        // 만약 3번째에 해당하면 결과 문자열에 추가하고 넘어감
        if(cnt == k){
            erasedPerson.append(to_string(num) + ", ");
            person++;
            cnt = 0;
        }else{
            // 아니라면 다시 뒤로 보냄
            circlePerson.push_back(num);
        }
    }

    string output = erasedPerson.substr(0, erasedPerson.size() - 2);
    cout << '<' << output << ">\n";
}