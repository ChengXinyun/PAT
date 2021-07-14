#include <iostream>

using namespace std;

int binarySearch(int num[], int left, int right, int x){
	while(left <= right){
		int mid = left + (right - left) / 2;
		if(num[mid] == x)	return mid;
		else if(num[mid] > x)	right = mid - 1;
		else 	left = mid + 1;
	}
	return -1;
}

// �������е�һ�����ڵ��� x ��Ԫ��λ��
int lower_bound(int num[], int left, int right, int x){
	while(left < right){
		int mid = left + (right - left) / 2;
		if(num[mid] >= x)	right = mid;
		else	left = mid + 1;
	}
	return left;
}

// �������е�һ������ x ��Ԫ��λ��
int upper_bound(int num[], int left, int right, int x){
	while(left < right){
		int mid = left + (right - left) / 2;
		if(num[mid] > x)	right = mid;
		else	left = mid + 1;
	}
	return left;
}

// ������ 2 ��ƽ���� ���� x ^ 2 - 2 = 0 �ĸ��� 
double sqrt(){
	double left = 1, right = 2, mid;
	while(right - left > 1e-5){
		mid = left + (right - left) / 2;
		if(mid*mid > 2)	right = mid;
		else	left = mid;
	}
	return mids;
} 

int main(){
	int num[10] = {1,2,3,4,6,6,7,8,9,10};
	cout << binarySearch(num, 0, 9, 6) << endl;
	cout << binarySearch(num, 0, 9, 11) << endl;
	cout << lower_bound(num, 0, 9, 6) << endl;
	cout << sqrt() << endl;
	return 0;
}
