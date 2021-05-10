#include <iostream>
using namespace std;

int main(){
    int a, b;
    cin >> a >> b;
    string c = to_string(a + b);
    int length = c.length();
    for(int i = 0; i < length; i++){
        cout <<c[i];
        if(c[i] == '-') continue;
        if((length - i - 1) % 3 == 0 && length -1 != i) cout << ",";
    }
    return 0;
}
