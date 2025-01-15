using namespace std;

long long solution(int price, int money, int count)
{
    long long answer = -1;
    long long total = 0;
    
    for(int i = count; i > 0; i--){
        total += price * i;
    }
    
    if(total <= money){
        return 0;
    }else{
        answer = total - money;
    }

    return answer;
}