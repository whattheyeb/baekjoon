#include <iostream>
#include <vector>

using namespace std;

int main(){
    int kind_student_cnt = 28;
    int stu_num;
    vector<int> bad_stu(3);
    vector<int> stu_check(30);

    for(int i = 0; i < kind_student_cnt; i++){
        cin >> stu_num;
        stu_check[stu_num - 1] = 1;
    }
    
    int cnt = 0;
    for(int i = 0; i < stu_check.size(); i++){
        if(stu_check[i] == 0){ 
            bad_stu[cnt] = i + 1;
            cnt++;
        }
    }

    if(bad_stu[1] > bad_stu[0]){
        for(int i = 0; i < 2; i++){
            cout << bad_stu[i] << "\n";
        }
    }else{
        for(int j = 1; j >= 0; j--){
            cout << bad_stu[j] << "\n";
        }
    }
    
}