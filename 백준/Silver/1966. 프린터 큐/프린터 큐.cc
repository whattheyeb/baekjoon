#include <iostream>
#include <queue>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    // 테스트케이스
    int T;
    cin >> T;

    while(T--){
        int n, m;
        cin >> n >> m;

        // 우선순위와 큐의 인덱스를 함께 저장
        queue<pair<int, int>> q;
        // 우선순위 큐를 사용함
        priority_queue<int> pq;

        for(int i = 0; i < n; i++){
            int p;
            cin >> p;
            q.push({p, i});
            pq.push(p);
        }

        int cnt = 0;

        while(true){
            auto current = q.front();
            q.pop();

            // 현재 큐의 맨앞(숫자가 제일 높은) 우선순위와 같을때 pop한다
            if(current.first == pq.top()){
                cnt++;
                pq.pop();

                // 알고싶어했던 문서의 m번째와 같을때 
                if(current.second == m){
                    cout << cnt << '\n';
                    break;
                }
            }else{
                q.push(current);
            }
        }
        
    }
    
}