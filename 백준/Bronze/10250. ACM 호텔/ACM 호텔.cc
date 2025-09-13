#include <iostream>

using namespace std;

int main(){
    int testcase;

    cin >> testcase;

    int floor, room, client;

    int clientFloor;
    int clientRoom;

    for(int i = 0; i < testcase; i++){
        cin >> floor >> room >> client;
        clientFloor = 1;
        clientRoom = 1;
        for(int j = 1; j < client; j++){
            if(clientFloor == floor){
                clientFloor = 1;
                clientRoom++;
            }else{
                clientFloor++;
            }
        }
        if(clientRoom < 10){
            cout << clientFloor << "0" << clientRoom << endl;
        }else{
            cout << clientFloor << clientRoom << endl;
        }
        
        
    }
}