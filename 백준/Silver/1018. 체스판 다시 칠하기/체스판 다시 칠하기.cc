#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int m, n;
    cin >> n >> m;
    // string 배열 만들기
    vector<string> chess(n);
    for (int i = 0; i < n; i++)
    {
        cin >> chess[i];
    }

    int answer = m * n;
    for (int i = 0; i <= n - 8; i++){
        for (int j = 0; j <= m - 8; j++){
            int cntW = 0;
            int cntB = 0;
            for (int x = 0; x < 8; x++){
                for (int y = 0; y < 8; y++){
                    char cur = chess[i + x][j + y];
                    if ((x + y) % 2 == 0) {
                        if (cur != 'W') cntW++;
                        if (cur != 'B') cntB++;
                    } else {
                        if (cur != 'B') cntW++;
                        if (cur != 'W') cntB++;
                    }
                }
            }
            answer = min(answer, min(cntW, cntB));
            
        }
    }

    cout << answer << endl;
}