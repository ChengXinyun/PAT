#include <iostream>
using namespace std;

int main(){
	int n;
	cin >> n;
	
	int dis[n+1];
	int tot = 0;
	int temp;
	dis[0] = 0;
	
	for(int i = 1; i <= n; i++){
		cin >> temp;
		tot += temp;
		dis[i] = tot;
	}

	int cnt;
	int a, b;
	cin >> cnt;
	while(cnt--){
		cin >> a >> b;
		if(a > b){
			int t = a;
			a = b;
			b = t;
		}
		int d = dis[b-1] - dis[a-1];
		d = tot - d > d ? d : tot - d;
		cout << d << endl;
	}
	return 0;
}
