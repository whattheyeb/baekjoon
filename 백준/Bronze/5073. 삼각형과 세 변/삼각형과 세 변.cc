#include <iostream>
#include <vector>

using namespace std;

int main(){
    int a[3];
    vector<int> remainl;
    do{
        remainl.clear();
        for(int i = 0; i < 3; i++){
            cin >> a[i];
        }
        if(a[0] == 0 && a[1] == 0 && a[2] == 0){
            break;
        }
        
        int longl = 0;
        for(int i = 0; i < 3; i++){
            if(a[longl] <= a[i]){
                longl = i;
            }
        }
        int sum = 0;
        for(int i = 0; i < 3; i++){
            if(i != longl){
                sum += a[i];
                remainl.push_back(i);
            }
        }

        if(sum <= a[longl]){
            cout << "Invalid" << "\n";
        }else{
            if(a[1] == a[2] && a[2] == a[0] && a[1] == a[0]){
                cout << "Equilateral" << "\n";
            }else if(a[remainl.front()] == a[remainl.back()] 
            || a[longl] == a[remainl.front()] || a[longl] == a[remainl.back()]){
                cout << "Isosceles" << "\n";
            }else{
                cout << "Scalene" << "\n";
            }
        }
        
    }while(a[0] != 0 || a[1] != 0 || a[2] != 0);
}