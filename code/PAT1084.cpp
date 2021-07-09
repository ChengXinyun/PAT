// 来自柳神思路, 学习一下
#include <iostream>

using namespace std;

int main(){
	string s1, s2, ans;
	cin >> s1 >> s2;
	for(int i = 0; i < s1.length(); i++){
		if(s2.find(s1[i]) == string::npos && ans.find(toupper(s1[i])) == string::npos){
			ans += toupper(s1[i]);			
		}
	}
	cout << ans;
	return 0;
}
