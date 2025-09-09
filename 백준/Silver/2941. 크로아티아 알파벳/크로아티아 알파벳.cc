#include <iostream>
#include <vector>

using namespace std;

int main(){
    string input;
    cin >> input;

    int cnt = 0;

    for(int i = 0; i < input.size(); i++){
        if(input[i] == 'c'){
            if((input[i + 1] == '=') || (input[i + 1] == '-')){
                cnt++;
                i++;
            }else{
                cnt++;
            }
        }else if(input[i] == 'd'){
            if(input[i + 1] == 'z' && input[i + 2] == '='){
                cnt++;
                i += 2;
            }else if(input[i + 1] == '-'){
                cnt++;
                i++;
            }else{
                cnt++;
            }
        }else if(input[i] == 'l'){
            if(input[i + 1] == 'j'){
                cnt++;
                i++;
            }else{
                cnt++;
            }
        }else if(input[i] == 'n'){
            if(input[i + 1] == 'j'){
                cnt++;
                i++;
            }else{
                cnt++;
            }
        }else if(input[i] == 's'){
            if(input[i + 1] == '='){
                cnt++;
                i++;
            }else{
                cnt++;
            }
        }else if(input[i] == 'z'){
            if(input[i + 1] == '='){
                cnt++;
                i++;
            }else{
                cnt++;
            }
        }else{
            cnt++;
        }
    }

    cout << cnt << endl;
}