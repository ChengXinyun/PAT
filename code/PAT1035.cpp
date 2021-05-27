#include <iostream>

using namespace std;

int main(){
	int n;
	scanf("%d", &n);
	string acc[1000][2];
	bool f[1000];
	for(int i = 0; i < 1000; i++){
		f[i] = true;
	}
	int m = 0;
	for(int j = 0; j < n; j++){
		cin >> acc[j][0] >> acc[j][1];
		for(int i = 0; i < acc[j][1].length(); i++){
			if(acc[j][1][i] == '1'){
				acc[j][1][i] = '@';
				f[j] = false;
			} else if(acc[j][1][i] == '0'){
				acc[j][1][i] = '%';
				f[j] = false;
			} else if(acc[j][1][i] == 'l'){
				acc[j][1][i] = 'L';
				f[j] = false;
			} else if(acc[j][1][i] == 'O'){
				acc[j][1][i] = 'o';
				f[j] = false;
			} else {
				continue;
			}
		}	
	}
	for(int j = 0; j < n; j++){
		if(f[j] == false)
			m++;
	}
	if(m == 0){
		if(n == 1)
			cout << "There is 1 account and no account is modified";
		else
			cout << "There are " << n << " accounts and no account is modified";
	} else {
		cout << m << endl;
		for(int j = 0; j < n; j++){
			if(f[j] == false)
				cout << acc[j][0] << " " << acc[j][1] << endl;
		}
	}	
	return 0;
}
