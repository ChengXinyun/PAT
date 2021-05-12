#include <iostream>
using namespace std;

int main(){
	int cnt;
	int seq[55] = {0};
	char p[5] = {'S','H', 'C', 'D', 'J'};
	string start[55];
	string end[55];
	
	cin >> cnt;
	for(int i = 1; i <= 54; i++){
		cin >> seq[i];
	}
	
	for(int i = 1; i <= 54; i++){
		if(i%13 == 0)
			start[i] = p[i/13-1] + to_string(13);
		else
			start[i] = p[i/13] + to_string(i%13);
	}
	
	while(cnt--){
		for(int i = 1; i <= 54; i++){
			end[seq[i]] = start[i]; 
		}
		
		for(int i = 1; i <= 54; i++){
			start[i] = end[i];
		}
	}
	cout << end[1];
	for(int i = 2; i <= 54; i++){
		cout << " " <<end[i];
	}
	return 0;
}
