#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> array, vector<vector<int>> commands) {
    vector<int> answer;

    for (const auto& command : commands) {
        int i = command[0] - 1;  
        int j = command[1];      
        int k = command[2] - 1;  

        vector<int> sliced(array.begin() + i, array.begin() + j);
        sort(sliced.begin(), sliced.end());
        answer.push_back(sliced[k]);
    }

    return answer;
}
