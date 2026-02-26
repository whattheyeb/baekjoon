#include <iostream>
#include <string>

using namespace std;

int main(){
    int T;
    cin >> T;
    
    int n;
    for(int i = 0; i < T; i++){
        string location1;
        int cnt = 0;
        cin >> n;
        while(n != 0){
            if(n % 2 == 1){
                location1.append(to_string(cnt));
                location1.append(" ");
            }
            n /= 2;
            cnt++;
        }
        cout << location1 << '\n';
    }
}