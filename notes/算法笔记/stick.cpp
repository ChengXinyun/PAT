/*
 * 给出N根木棒，长度均已知，通过切割它们来得到至少K段相等的木棒（长度为为整数），问这些长度相等的木棒最长能有多长。参见算法笔记，P134
 */
#include <cstdio>
#include <algorithm>
#include <iostream> 
using namespace std;
const int maxn = 10010;

int a[maxn];

int f(int n){
	int count = 0;
	for(int i=0; i<n; i++) {
		count += a[i] / n;
	}
	return count;
}

int main() {
	
	int n,k;
	cin >> n;  
	cin >> k;
	for(int i=0; i<n; i++) {
		cin >> a[i]; 
	}
	sort(a, a+n);
	int left = 0, right = a[n-1], mid;
	while(left+1 < right) {
		mid = (left + right) / 2;
		if(f(mid) < k) { //求解第一个满足count<K的L
			right = mid;
		}
		else {
			left = mid;
		}
	}
	cout << right - 1;
	return 0;
}
