#include <iostream>
#include <stack>
#include <vector>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie();
    cout.tie();

    // 1부터 n까지의 수를 스택에 넣었다가 뽑음으로써, 하나의 수열을 만들 수 있다. 
    int n;
    cin >> n;
    
    vector<int> answer;

    // 둘째 줄부터 n개의 줄에는 수열을 이루는 1이상 n이하의 정수가 주어짐
    for(int i = 0; i < n; i++){
        int input;
        cin >> input;
        answer.push_back(input);
    }

    // 1 ~ 8 인 배열을 앞에서 돌면서 현재 입력된 수열의 맨 첫번째 숫자가 나올때까지 push 한다.
    // s : [8 7 6 5 4 3 2 1
    // answer : 4 3 6 8 7 5 2 1

     // s2 기준으로 +, - 생각하기
    stack<int> s2;
    // 초기값 넣어주기
    s2.push(0);

    int s = 1;
    int idx = 0;
    string result = "";

    while(idx < n){
        if(s2.top() > answer[idx]){
            result = "NO";
            break;
        }else if(s2.top() == answer[idx]){
            s2.pop();
            result += "-\n";
            idx++;
        }else if(s2.top() < answer[idx]){
            s2.push(s);
            s++;
            result += "+\n";
        }
    }
    cout << result;
}