#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b)    // 오름차순 비교 함수 구현
{
    int num1 = *(int *)a;    // void 포인터를 int 포인터로 변환한 뒤 역참조하여 값을 가져옴
    int num2 = *(int *)b;    // void 포인터를 int 포인터로 변환한 뒤 역참조하여 값을 가져옴

    if (num1 < num2)    // a가 b보다 작을 때는
        return -1;      // -1 반환
    
    if (num1 > num2)    // a가 b보다 클 때는
        return 1;       // 1 반환
    
    return 0;    // a와 b가 같을 때는 0 반환
}

int main(){
    
    int score[10];
    int max[5] = {0};
    int max_num[5] = {0};
    int sum = 0;
    
        for(int i = 0; i<8; i++){
        scanf("%d", &score[i]);
    }

    for(int l = 0; l < 5; l++){
        for(int m = 0; m < 8; m++){
            if(max[l] < score[m]){
                max[l] = score[m];
                max_num[l] = m;
            }
        }
        score[max_num[l]] = 0;
    }

    for(int n = 0; n < 5; n++){
        
        sum += max[n];
    }
    
    qsort(max_num,  sizeof(max_num) / sizeof(int), sizeof(int), compare);

    

    printf("%d\n", sum);

    for(int j = 0; j < 5; j++){
        printf("%d ", max_num[j]+1);
    }
    
    

    
    
    
}