#include <iostream>
using namespace std;

int main(){
	float re[2001] = {0};
	float r[1001] = {0};
	int num;
	int a;
	float b;
	int cnt = 0;
	
	cin >> num;
	while(num--){
		cin >> a >> b;
		r[a] = b;
	}
	
	cin >> num;
	while(num--){
		cin >> a >> b;
		for(int i = 1000; i >= 0; i--){
			if(r[i] != 0.0){
				re[a+i] += b * r[i];
			}
		}	
	}
	
	for(int i = 2000; i >= 0; i--){
		if(re[i] != 0){
			cnt++;
		}
	}
	printf("%d", cnt);
	for(int i = 2000; i >= 0; i--){
		if(re[i] != 0){
			printf(" %d %.1f", i, re[i]);
		}
	}
	return 0;
}
