// 二路归并排序 
#include <iostream>
#include <algorithm> 

using namespace std;

const int maxn = 100;

// 递归实现 
void merge(int A[], int L1, int R1, int L2, int R2){
	int i = L1, j = L2;
	int temp[maxn], index = 0;
	while(i <= R1 && j <= R2){
		if(A[i] <= A[j]){
			temp[index++] = A[i++];
		} else {
			temp[index++] = A[j++];
		}
	}
	while(i <= R1){
		temp[index++] = A[i++];
	}
	while(j <= R2){
		temp[index++] = A[j++];
	}
	for(i = 0; i < index; i++){
		A[L1 + i] = temp[i];
	}
} 

void mergeSort(int A[], int left, int right){
	if(left < right){
		int mid = left + (right - left) / 2;
		mergeSort(A, left, mid);
		mergeSort(A, mid + 1, right);
		merge(A, left, mid, mid + 1, right);
	}
}

// 非递归实现，下标从 0 开始 
void mergeSort_1(int A[], int n){
	for(int step = 2; step / 2 < n; step *= 2){
		for(int i = 0; i < n; i += step){
			int mid = i + step / 2 - 1;
			if(mid + 1 < n){
				merge(A, i, mid, mid + 1, min(i + step, n - 1));
			}
		}
	}
} 

void mergeSort_2(int A[], int n){
	for(int step = 2; step / 2 < n; step *= 2){
		for(int i = 0; i < n; i += step){
			sort(A + i, A + min(i + step - 1, n));
		}
	}
}

int main(){
	int A[10] = {10,1,2,3,4,5,6,7,8,9};
	//mergeSort(A, 0, 9);
	mergeSort_2(A, 10); 
	for(int i = 0; i < 10; i++){
		cout << A[i] << endl;
	}
	return 0;
} 
