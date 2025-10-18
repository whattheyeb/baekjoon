#include <iostream>
#include <vector>

using namespace std;

class Stack{
    private:
        vector<int> data;
    public:
        Stack(){}
        void push(int value){
            data.push_back(value);
        }
        int pop(){
            if(data.empty()){
                return -1;
            }
            int topValue = data.back();
            data.pop_back();
            return topValue;
        }
        bool isEmpty(){
            return data.empty();
        }
        int top(){
            return data.back();
        }
        void print(){
            for(int i = 0; i < data.size(); i++){
                cout << data[i] << ' ';
            }
            cout << '\n';
        }
        int size(){
            return data.size();
        }
};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int k;
    cin >> k;

    long long int sum = 0;

    Stack s;
    int num;
    int cnt = 0;
    // 스택 구현, pop 구현
    for(int i = 0; i < k; i++){
        cin >> num;
        if(num != 0){
            s.push(num);
            cnt++;
        }else{
            s.pop();
            cnt--;
        }
        // s.print();
    }
    for(int i = 0; i < cnt; i++){
        sum += s.top();
        s.pop();
    }
    cout << sum << '\n';
}