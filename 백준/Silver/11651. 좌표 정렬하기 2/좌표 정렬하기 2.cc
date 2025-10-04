#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct Coord{
    int x;
    int y;
};

bool compare(Coord a, Coord b){
    if(a.y == b.y) return a.x < b.x;
    else return a.y < b.y;
}

int main(){
    int n;
    cin >> n;
    vector<Coord> arr(n);
    for(int i = 0; i < n; i++){
        cin >> arr[i].x >> arr[i].y;
    }
    sort(arr.begin(), arr.end(), compare);
    for(auto a : arr){
        cout << a.x << " " << a.y << '\n';
    }

}