#include <iostream>
#include <vector>
#include <queue>

using namespace std;
bool visited[101];
vector<int> graph[101];
int cnt = 0;


void bfs(int start){
    queue<int> q;
    q.push(start);
    visited[start] = true;
    while(!q.empty()){
        int x = q.front();
        q.pop();
        for(int i = 0; i < graph[x].size(); i++){
            int y = graph[x][i];
            if(!visited[y]){
                cnt++;
                q.push(y);
                visited[y] = true;
            }
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    // 컴퓨터 개수
    int n;
    cin >> n;


    // 컴퓨터 쌍 개수
    int pairCnt;
    cin >> pairCnt;

    // 쌍 입력
    int a, b;
    for(int i = 0; i < pairCnt; i++){
        cin >> a >> b;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }

    bfs(1);
    
    cout << cnt << '\n';
    
}