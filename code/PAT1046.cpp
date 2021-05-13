#include <iostream>
#include <vector>
using namespace std;

//超时的话，想一些简便的计算方法；
//vector的使用，默认初始化里面为0； 
//swap()函数
//min()函数 

int main(){
	int n;
	cin >> n;
	
	vector<int> dis(n+1);
	int tot = 0, cnt, a, b;
	for(int i = 1; i <= n; i++){
		int temp;
		cin >> temp;
		tot += temp;
		dis[i] = tot;
	}
	
	cin >> cnt;
	while(cnt--){
		cin >> a >> b;
		if(a > b){
			swap(a,b);
		}
		int d = dis[b-1] - dis[a-1];
		d = min(d, tot-d);
		cout << d << endl;
	}
	return 0;
}
