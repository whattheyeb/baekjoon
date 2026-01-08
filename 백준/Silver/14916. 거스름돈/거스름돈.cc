#include <iostream>

using namespace std;

int main(){
    // 거스름돈 액수
    int n;
    cin >> n;
    int count5 = -1;
    int count2 = -1;
    
    if(n % 5 == 0){
        count2 = 0;
        count5 = n / 5;
    }else{
        count5 = n / 5;
        while(count5 != 0){
            if((n - 5 * count5) % 2 == 0){
                count2 = (n - 5 * count5) / 2;
                break;
            }
            count5--;
        }
    }

    if(n < 5){
        if(n % 2 == 0){
            count2 = n / 2;
        }
    }

    int count = count2 + count5;

    if(count == -1 && n % 2 == 0){
        count = n / 2;
    }
    cout << count << '\n';
}