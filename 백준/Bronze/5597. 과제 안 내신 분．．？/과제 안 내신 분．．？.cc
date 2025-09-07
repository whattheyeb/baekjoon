#include <iostream>
#include <vector>

using namespace std;

int main(){
    int kind_student_cnt = 28;
    int stu_num;
    vector<int> bad_stu;

    // 0/1 만 쓰고있기때문에 불리언 타입을 쓰는 것이 더 좋다
    vector<bool> stu_check(30);

    for(int i = 0; i < kind_student_cnt; i++){
        cin >> stu_num;
        stu_check[stu_num - 1] = 1;
    }
    
    // 처음 vector 크기를 정하지않은채로 선언하고, push_back를 사용한다. 
    for(int i = 0; i < stu_check.size(); i++){
        if(stu_check[i] == 0){
            bad_stu.push_back(i+1);
        }
    }

    for(int i = 0; i < 2; i++){
            cout << bad_stu[i] << "\n";
    }
    
}