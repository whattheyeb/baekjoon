#include <iostream>
#include <map>
#include <vector>
#include <algorithm>

using namespace std;

int cmp(string a1, string a2){
    if(a1.size() == a2.size()){
        return a1 < a2;
    }else{
        return a1.size() > a2.size();
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    // 자주 나오는 단어일수록 -> 단어별로 나오는 횟수 체크
    // 해당 단어의 길이가 길수록 -> 횟수가 같으면 길이가 긴게 앞으로
    // 알파벳 사전 순으로 앞에 있는 단어일수록 -> 횟수, 길이가 같으면 알파벳 사전 순으로
    map<string, int> wordmaster;
    
    // 단어개수 n, 단어 길이 기준 m
    int n, m;
    cin >> n >> m;

    // m보다 작은 단어들은 저장하지 않는다.
    for(int i = 0; i < n; i++){
        string word;
        cin >> word;
        if(word.size() >= m) wordmaster[word]++;
    }

    // map을 사용하면 자동으로 key를 기준으로(알파벳 오름차순) 정렬해줌
    // 기본적으로 map을 사용하고, 횟수가 많은 경우는 따로 저장해줌

    int maxCnt = 0;
    for(auto it = wordmaster.begin(); it != wordmaster.end(); ++it){
        if(it -> second > maxCnt) maxCnt = it->second;
    }

    vector<vector<string>> wordCnt(maxCnt + 1);
    int idx = 1;
    while(idx <= maxCnt){
        for(auto it = wordmaster.begin(); it != wordmaster.end(); ++it){
            if(it->second == idx){
                wordCnt[idx].push_back(it->first);
            }
        }
        idx++;
    }

    for(int i = 1; i <= maxCnt; i++){
        sort(wordCnt[i].begin(), wordCnt[i].end(), cmp);
    }

    for(int i = maxCnt; i > 0; i--){
        for(int j = 0; j < wordCnt[i].size(); j++){
            cout << wordCnt[i][j] << '\n';
        }
    }
}