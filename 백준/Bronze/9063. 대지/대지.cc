#include <iostream>
#include <vector>

using namespace std;

// 어떤 지점에서 임씨의 이름이 적힌 옥구슬이 나오면 그 지점은 임씨땅임
// 옥구슬이 나오는 모든 지점을 포함하는, 직사각형의 대지
// 옥구슬의 위치 N개

struct Location{
    int a;
    int b;
};

int main(){
    int N;
    cin >> N;
    
    vector<Location> ok(N);
    
    for(int i = 0; i < N; i++){
        cin >> ok[i].a >> ok[i].b;
    }

    int minX = ok[0].a, maxX = ok[0].a, minY = ok[0].b, maxY = ok[0].b;

    for(int i = 0; i < N; i++){
        if(minX >= ok[i].a){
            minX = ok[i].a;
        }
        if(maxX <= ok[i].a){
            maxX = ok[i].a;
        }
        if(minY >= ok[i].b){
            minY = ok[i].b;
        }
        if(maxY <= ok[i].b){
            maxY = ok[i].b;
        }
    }

    int area = (maxX - minX) * (maxY - minY);
    cout << area << "\n";

}