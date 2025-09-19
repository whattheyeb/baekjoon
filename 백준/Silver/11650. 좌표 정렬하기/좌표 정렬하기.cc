#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct Point{
    int x;
    int y;
};

bool compareN(Point& a, Point& b){
    if(a.x == b.x) return a.y < b.y;
    return a.x < b.x;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int N;
    cin >> N;

    vector<Point> points(N);

    for(int i = 0; i < N; i++){
        cin >> points[i].x >> points[i].y;   
    }

    sort(points.begin(), points.end(), compareN);

    for(int i = 0; i < N; i++){
        cout << points[i].x << " " << points[i].y << "\n";
    }


}