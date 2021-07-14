#include <iostream>
#include <algorithm>

using namespace std;

struct inteval{
	int left, right;
}inte[1001];

bool cmp(inteval a, inteval b){
	if(a.right  !=  b.right)	return a.right < b.right;
	return a.left > b.left;
}

int main(){
	int n; 
	scanf("%d", &n);
	for(int i = 0; i < n; i++){
		scanf("%d %d", &inte[i].left, &inte[i].right);
	}
	sort(inte, inte + n, cmp);
	// for(int i = 0; i < n; i++){
	//     cout << inte[i].left << " " <<inte[i].right;
	// }
	int last = inte[0].right;
	int count = 1;
	cout << inte[0].left << " " <<inte[0].right << endl;
	for(int i = 1; i < n; i++){
		if(inte[i].left >= last){
			last = inte[i].right;
			cout << inte[i].left << " " <<inte[i].right << endl;
			count++;
		}
	}
	cout << count << endl;
	return 0;
}
