#include <string>
#include <vector>

using namespace std;

int solution(vector<int> numbers) {
    int answer = -1;
    int sum = 45;
    
    for(int num : numbers){
        sum -= num;
    }
    
    answer = sum;
    return answer;
}