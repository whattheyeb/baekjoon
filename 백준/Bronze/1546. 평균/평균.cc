#include <iostream>
#include <vector>

using namespace std;

int main(){
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);

    // 최댓값을 고른다.
    // 그리고 모든 과목을 각 과목 점수 / 최댓값 * 100 으로 조작함
    int max = 0;
    int sub_cnt;

    cin >> sub_cnt;

    vector<int> score(sub_cnt);

    for(int i = 0; i < sub_cnt; i++){
        cin >> score[i];
        if(max <= score[i]){
            max = score[i];
        }
    }

    float sum = 0.0;
    float new_score;

    for(int i = 0; i < sub_cnt; i++){
        new_score = static_cast<double>(score[i]) / max * 100;
        sum += new_score;
    }

    cout << sum / sub_cnt << "\n";
}