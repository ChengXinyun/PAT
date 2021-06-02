#include <iostream>
#include <vector>
using namespace std;

int main(){
	string str[10] = {"ling", "yi", "er", "san", "si", "wu", "liu", "qi", "ba", "jiu"};
	string ans[8] = {"Shi", "Bai", "Qian", "Wan", "Shi", "Bai", "Qian", "Yi"};
	
	vector<int> v;
	
	long long num;
	scanf("%lld", &num);
	if(num == 0)	cout << "ling";
	else{
		if(num < 0){
			cout << "Fu ";
			num = -num;
		}
		while(num != 0){
			v.push_back(num % 10);
			num /= 10;
		}
	}
	// cout << v[0] << endl;
	bool f = false;
	for(int i = v.size() - 1; i >= 0; i--){
		int temp = v[i];
		if(temp == 0){
			f = true;
		} else{
			if(f == true){
				if(i == 0){
					cout << "ling " << str[temp];
				} else {
					cout << "ling " << str[temp] << " " << ans[i - 1] << " ";
				}
			} else {
				if(i == 0){
					cout << str[temp];
				} else {
					cout << str[temp] << " " << ans[i - 1] << " ";
				}
			}
			f = false;
		}
	}
	
	
	return 0;
}
