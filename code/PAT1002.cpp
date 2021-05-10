#include <iostream>
using namespace std;

int main(){
    float re[1001] = {0};
    int num;
    int a;
    float b;
    
    for(int i = 0; i < 2; i++){
        scanf("%d", &num);
        while(num--){
            scanf("%d%f", &a, &b);
            re[a] += b;
        }
    }
    
    int cnt = 0;
    for(int i = 0; i < 1001; i++){
        if(re[i] != 0){
            cnt++;
        }
    }
    printf("%d",cnt);
    for(int i = 1000; i >= 0; i--){
        if(re[i] != 0.0){
            printf(" %d %.1f", i, re[i]);
        }
    }
    return 0;
}
