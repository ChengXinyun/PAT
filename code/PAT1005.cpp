#include <iostream>

using namespace std;

int main(){
	long long sum = 0;
	string num;
	string ch[10] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
	
	cin >> num;
	for(int i = 0; i < num.length(); i++){
		sum += num[i] - '0';
	}
	// cout << sum << endl;
	string str = to_string(sum);
	// cout << str[1] << endl;
	cout << ch[str[0] - '0'];
	for(int i = 1; i < str.length(); i++){
		cout << " " << ch[str[i] - '0'];
	}	
	return 0;
}
