#include <iostream>
#include <vector>

using namespace std;

int main(){
    int N;
    cin >> N;

    vector<int> x(N);
    vector<int> y(N);

    for(int i = 0; i < N; i++){
        cin >> x[i] >> y[i];
    }

    bool paper[101][101] = {false};
    for(int i = 0; i < N; i++){
        for(int j = x[i]; j < x[i] + 10; j++){
            for(int k = y[i]; k < y[i] + 10; k++){
                paper[j][k] = true;
            }
        }
    }
    
    int area = 0;
    for(int i = 1; i <= 100; i++){
        for(int j = 1; j <= 100; j++){
            if(paper[i][j]) area++;
        }
    }

    cout << area << "\n";
    
}