#include <iostream>
#include <algorithm>
using namespace std;

void toArr(int num, int arr[]){
    for(int i = 3; i >= 0; i--){
        arr[i] = num % 10;
        num /= 10;
    }
}

bool cmp(int a, int b){
    return a > b;
}

int toNum(int arr[]){
    return arr[0] * 1000 + arr[1] * 100 + arr[2] * 10 + arr[3];
}

int main(){
    int num;
    int arr[4];
    cin >> num;

    while(1){
        toArr(num, arr);
        sort(arr, arr + 4);// sort() 默认升序排列；
        int num1 = toNum(arr);
        sort(arr, arr + 4, cmp);
        int num2 = toNum(arr);
        num = num2 - num1;
        printf("%04d - %04d = %04d\n", num2, num1, num);
        if(num == 0 || num == 6174){
            break;
        }
    }
}