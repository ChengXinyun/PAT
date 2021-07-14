// 全排列(递归实现) 
#include <iostream>

using namespace std;

int n, P[11], f[11] = {0};

void res(int k){
	if(k > n){
		for(int i = 1; i <= n; i++){
			cout << P[i] << " ";
		}
		cout << endl;
		return;
	}
	for(int i = 1; i <= n; i++){// 试图将从一到N的数填入数组 
		if(f[i] == 0){			// 如果之前没出现过，就填入 
			f[i] = 1;			// 填入后，改变 f 标志 
			P[k] = i;			// 将数填入 k 位置 
			res(k + 1);			// 继续递归，填下一个数 
			f[i] = 0;			// 递归结束，恢复状态 
		}
	}
	
}

int main(){
	n = 4;
	res(1);
	return 0;
}
