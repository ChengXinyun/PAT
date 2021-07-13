#include <iostream>
#include <algorithm>

using namespace std;

string str[10001];

bool cmp(string a, string b){
	return a + b < b + a; 
}

int main(){
	int n;
	cin >> n;
	for(int i = 0; i < n; i++)	cin >> str[i];
	sort(str, str + n, cmp);
	string s;
	for(int i = 0; i < n; i++){
		s += str[i];
	}
	int i;
	for(i = 0; i < s.length(); i++){
		if(s[i] != '0'){
			break;
		}
	}
	
	// 结果为0，两分 
	if(i == s.length()){
		cout << "0";
	}
	
	for(; i < s.length(); i++){
		cout << s[i];
	}
	return 0;
}
