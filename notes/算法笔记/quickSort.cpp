#include <iostream>

using namespace std;

int Partition(int A[], int left, int right){
	int temp = A[left];
	while(left < right){
		while(left < right && A[right] > temp)	right--;
		A[left] = A[right];
		
		while(left < right && A[left] < temp)	left++;
		A[right] = A[left];
	}
	A[left] = temp;
	return left;
} 

void quickSort(int A[], int left, int right){
	if(left < right){
		int mid = Partition(A, left, right);
		quickSort(A, left, mid - 1);
		quickSort(A, mid + 1, right);
	}	
}

int main(){
	int A[10] = {10,9,8,7,6,5,4,3,2,1};
	quickSort(A, 0, 9);
	for(int i = 0; i < 10; i++){
		cout << A[i] <<endl;
	}
	return 0;
}
