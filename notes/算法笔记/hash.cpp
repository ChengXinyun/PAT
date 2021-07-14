#include <cstdio>

const int max = 100;

char ch[max][5]; 

int hashtable[26*26*26] = {0};

int hasFunc(char s[], int len){
	int id = 0;
	for(int i = 0; i < len; i++){
		id = id * 26 + (s[i] - 'A');
	}
	return id;
}

int main(){
	int m, n;
	scanf("%d %d", &n, &m);
	for(int i = 0; i < n; i++){
		scanf("%s", ch[i]);
		int id = hasFunc(ch[i], 3);
		hashtable[id]++;
	}
	for(int i = 0; i < m; i++){
		char temp[5];
		scanf("%s", &temp);
		printf("%d\n", hashtable[hasFunc(temp, 3)]);
	}
	
	return 0;
}
