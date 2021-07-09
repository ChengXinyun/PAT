#include <cstdio>

int num[10001];

int hashTable[100001] = {0};

int main(){
	int n;
	scanf("%d", &n);
	
	for(int i = 0; i < n; i++){
		scanf("%d", &num[i]);
		hashTable[num[i]]++;
	}
	int i;
	for(i = 0; i < n; i++){
		if(hashTable[num[i]] == 1){
			printf("%d", num[i]);
			break;
		}
	}
	if(i == n){
		printf("None");
	}
	return 0;
}
