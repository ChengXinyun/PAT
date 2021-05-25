#include <iostream>

using namespace std;

int main(){
	string str;
	cin >> str;
	
	int n = str.length();
	int n1 = (n + 2) / 3; 
	int n2 = n - 2 * n1;
	int i = 0;
	
	for(i = 0; i < n1 - 1; i++){
		cout << str[i];
		for(int j = 0; j < n2; j++){
			cout << " ";
		}
		cout << str[n - 1 - i] << endl;
	}
	
	for(int j = 0; j < n2 + 2; j++){
		cout << str[i + j];
	}
	return 0;
}

