#include <iostream>
#include <algorithm>

using namespace std;

int main(){
	int n;
	scanf("%d\n", &n);
	
	string s, str;
	for(int i = 0; i < n; i++){
		getline(cin,str);
		reverse(str.begin(), str.end());
		if(i == 0){
			s = str;	
		} else {
			for(int j = 0; j < s.length() && j < str.length(); j++){
				if(str[j] != s[j]){
					s = s.substr(0, j);
					break;
				}
			}	
		}
	}
	reverse(s.begin(), s.end());
	if(s.length() == 0)	s = "nai";
	cout << s;
	return 0;
}
