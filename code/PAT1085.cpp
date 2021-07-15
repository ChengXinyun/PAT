// 1085 
// 1010 1044 1048
#include <iostream>
#include <algorithm>

using namespace std;

int n, p;
int num[100001];

int binarySearch(int i, int x){
	if(num[n-1] <= x)	return n;
	int l = i + 1, r = n - 1, mid;
	while(l < r){
		mid = l + (r - l) / 2;
		if(num[mid] <= x)	l = mid + 1;
		else	r = mid;
	}
	return l;
}

int main(){
	cin >> n >> p;
	for(int i = 0; i < n; i++){
		cin >> num[i];
	}
	sort(num, num + n);
	
	int ans = 1;
	for(int i = 0; i < n; i++){
		int j = binarySearch(i, p * num[i]);
		ans = max(ans, j - i);
	}
	cout << ans;
	return 0;
}
