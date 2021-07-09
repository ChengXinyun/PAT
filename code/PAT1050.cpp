#include <iostream>
#include <string.h>

using namespace std;

int main(){
	string s1, s2[100000];
	cin.getline(s1, 100000);
	cin.getline(s2, 100000);
	// cout << s1 << s2;
	
	bool flag[256] ={false};
	
    int l1 = strlen(s1);
    int l2 = strlen(s2);
	for(int i = 0; i < l2; i++){
		flag[s2[i]] = true;
	} 
	
	for(int i = 0; i < l1; i++){
		if(!flag[s1[i]])
			cout << s1[i];
	}
	return 0;
}
