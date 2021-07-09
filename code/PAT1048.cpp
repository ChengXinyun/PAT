#include <iostream>

using namespace std;

int temp[100001];
int hashTable[1000] = {0}; 

int main(){
	int n, m;
	scanf("%d %d", &n, &m);
	
	for(int i = 0; i < n; i++){
		scanf("%d", &temp[i]);
		hashTable[temp[i]]++;
	}
	
	int index = 1001;
	for(int i = 0; i < n; i++){
		if((m != temp[i] * 2 && hashTable[m - temp[i]] >= 1) || (m == temp[i] * 2 && hashTable[m - temp[i]] > 1)){
			if(temp[i] < index)
				index = temp[i];
		}
	}
	if(index >= 1000){
		cout << "No Solution";
	} else {
		cout << index << " " << m - index;
	}
	
	return 0;
}
