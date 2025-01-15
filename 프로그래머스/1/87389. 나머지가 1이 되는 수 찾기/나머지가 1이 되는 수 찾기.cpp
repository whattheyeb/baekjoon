#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    for(answer = 2; answer < n; answer++){
        if(n % answer == 1){
            return answer;
        }
    }
    return answer;
}