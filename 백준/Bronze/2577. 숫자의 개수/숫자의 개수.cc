#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int a,b,c;
    int result;
    char result1[20];
    int one = 0, two = 0, three = 0, four = 0, five= 0, six= 0
    , seven= 0, eight= 0, nine= 0, zero = 0;
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    result = a*b*c;
    sprintf(result1, "%d", result);
    for(int i = 0; i<=strlen(result1); i++){
        if(result1[i] == '0'){
            zero++;
        }else if(result1[i] == '1'){
            one++;
        }else if(result1[i] == '2'){
            two++;
        }else if(result1[i] == '3'){
            three++;
        }else if(result1[i] == '4'){
            four++;
        }else if(result1[i] == '5'){
            five++;
        }else if(result1[i] == '6'){
            six++;
        }else if(result1[i] == '7'){
            seven++;
        }else if(result1[i] == '8'){
            eight++;
        }else if(result1[i] == '9'){
            nine++;
        }
        
    }
    printf("%d\n%d\n%d\n",zero, one, two);
    printf("%d\n%d\n%d\n",three, four, five);
    printf("%d\n%d\n",six, seven);
    printf("%d\n%d\n",eight,nine);


}