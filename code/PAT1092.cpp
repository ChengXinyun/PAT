#include <iostream>
#include <string>

using namespace std;

int hashTable[62] = {0};

int hashFunc(char ch){
	if(ch >= 'A' && ch <= 'a'){
		return ch - 'A';
	} else if(ch >= 'a' && ch <= 'z'){
		return ch - 'a' + 26;
	} else {
		return 52 + ch - '0';
	}
}

int main(){
	string shop, want;
	cin >> shop >> want;
	// printf("%s %s", shop, want);	
	// printf("%d %d", shop.length(), want.length());
	// cout << int('A'); 
	for(int i = 0; i < shop.length(); i++){
		hashTable[hashFunc(shop[i])]++;
	}
	for(int i = 0; i < want.length(); i++){
		int temp = hashFunc(want[i]);
		hashTable[temp]--;
	}
	int i;
	int sum = 0;
	int div = 0;
	for(i = 0; i < 62; i++){
		if(hashTable[i] < 0){
			cout << "No ";
			break;
		}
		sum += hashTable[i];
	}
	if(i >= 62){
		cout << "Yes " << sum;
	} else {
		sum = 0;
		for(int i = 0; i < 62; i++){
			if(hashTable[i] < 0){
				sum += hashTable[i];	
			}
		}
		cout << 0 - sum;
	}
	
	return 0;
}
