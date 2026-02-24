#include <iostream>
#include <vector>

using namespace std;

int main(){
    int testcase;
    cin >> testcase;
    int student_cnt;
    
    int sum;
    int pass_cnt;
    for(int i = 0; i < testcase; i++){
        sum = 0;
        pass_cnt = 0;
        cin >> student_cnt;
        vector<int> student_score(student_cnt);
        for(int j = 0; j < student_cnt; j++){
            cin >> student_score[j];
            sum += student_score[j];
        }
        for(int k = 0; k < student_cnt; k++){
            if(student_score[k] > (sum / student_cnt)){
                pass_cnt++;
            }
        }
        cout << fixed;
        cout.precision(3);
        cout << pass_cnt / (double)student_cnt * 100 << '%' << '\n';
        
    }
}