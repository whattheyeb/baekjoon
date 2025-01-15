#include <string>
#include <vector>

using namespace std;

int countDivisors(int n) {
    int count = 0;
    for (int i = 1; i * i <= n; i++) {
        if (n % i == 0) {
            count++;
            if (i != n / i) {
                count++;
            }
        }
    }
    return count;
}

int solution(int number, int limit, int power) {
    int answer = 0;
    
    for (int i = 1; i <= number; i++) {
        int divisors = countDivisors(i);
        if (divisors > limit) {
            answer += power;
        } else {
            answer += divisors;
        }
    }

    return answer;
}