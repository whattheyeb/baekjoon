#include <iostream>
#include <vector>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int N;
    cin >> N;

    int weight[50], height[50];
    for(int i = 0; i < N; i++){
        cin >> weight[i] >> height[i];
    }

    int rank;
    for(int i = 0; i < N; i++){
        rank = 1;
        for(int j = 0; j < N; j++){
            if(height[i] < height[j] && weight[i] < weight[j]){
                rank++;
            }
        }
        cout << rank << " ";
    }
    cout << "\n";

    
}