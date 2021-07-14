/*
 * ����N��ľ�������Ⱦ���֪��ͨ���и��������õ�����K����ȵ�ľ��������ΪΪ������������Щ������ȵ�ľ������ж೤���μ��㷨�ʼǣ�P134
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
		if(f(mid) < k) { //����һ������count<K��L
			right = mid;
		}
		else {
			left = mid;
		}
	}
	cout << right - 1;
	return 0;
}
