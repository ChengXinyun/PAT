#include <iostream>
#include <climits>
using namespace std;

int main(){
	int n, mint = INT_MAX, maxt = INT_MIN;
	scanf("%d", &n);
	string first, last;	
	while(n--){
		string name;
		cin >> name;
		int h1, m1, s1, h2, m2, s2;
		scanf("%d:%d:%d %d:%d:%d", &h1, &m1, &s1, &h2, &m2, &s2);
		int t1 = 3600*h1 + 60*m1 + s1;
		int t2 = 3600*h2 + 60*m2 + s2;
		if(t1 < mint){
			mint = t1;
			first = name;
		}
		if(t2 > maxt){
			maxt = t2;
			last = name;
		}
	}
	cout << first << " " << last;
	return 0;
}
