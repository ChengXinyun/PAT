#include <iostream>
#include <algorithm>

using namespace std;

long long coupon[100001], product[100001];


int main(){
	long long m, n;
	cin >> m;
	for(int i = 0; i < m; i++){
		cin >> coupon[i];
	}
	cin >> n;
	for(int i = 0; i < n; i++){
		cin >> product[i];
	}
	sort(coupon, coupon + m);
	sort(product, product + n);
	
	long long i = m - 1, j = n - 1;
	long long sum = 0;
	while(i >= 0 && j >= 0){
		if(coupon[i] < 0 || product[j] < 0){
			break;
		}
		sum += coupon[i]*product[j];
		i--;
		j--;
	}
	i = 0;
	j = 0;
	while(i < m && j < n){
		if(coupon[i] > 0 || product[j] > 0){
			break;
		}
		sum += coupon[i]*product[j];
		i++;
		j++;
	}
	cout << sum;
	return 0;
}
