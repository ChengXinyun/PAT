#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    double num, sum = 0;
    for(int i = 1; i <= n; i++){
        cin >> num;
        sum += num * i * (n + 1 - i);
    }
    printf("%.2f", sum);
    return 0;
}