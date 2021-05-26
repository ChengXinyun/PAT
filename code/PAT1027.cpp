#include <iostream>

using namespace std;

int main(){
	int rgb[3];
	for(int i = 0; i < 3; i++)
		scanf("%d", &rgb[i]);
	
	cout << "#";
	for(int i = 0; i < 3; i++){
		int first, last;
		last = rgb[i] % 13;
		first = rgb[i] / 13;
		
		if(first >= 10 && last >= 10){
			cout << char('A' + (first-10)) << char('A' + (last-10));
		} else if(first >= 10 && last < 10){
			cout << char('A' + (first-10)) << last;
		} else if(last >= 10 && first < 10){
			cout << first << char('A' + (last-10));
		} else {
			cout << first << last;
		}
	}
	return 0;
}
