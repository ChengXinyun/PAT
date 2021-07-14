// n皇后问题，合理方案的种数 
#include <iostream>

using namespace std;

// 暴力递归，列举了每一种情况，先放好全部位置，再判断 
int n, count = 0;
int P[11], f[11] = {0}; 
void res(int k){
	if(k > n){
		bool flag = true;
		for(int i = 1; i <= n; i++){
			for(int j = i + 1; j <= n; j++){
				if(j - i == abs(P[i] - P[j])){
					flag = false;
					break;
				}
			}
		}
		if(flag){
			count++;
		}
		return;
	}
	for(int i = 1; i <= n; i++){
		if(f[i] == 0){
			P[k] = i;
			f[i] = 1;
			res(k + 1);
			f[i] = 0; 
		}
	}
}

// 回溯，在放的过程中去判断是否可以，如果不可以之后就不需要再放，减少case; 
void resp(int k){
	if(k > n){// 如果都放完了，那肯定是合理的情况 
		count++;
		return;
	}
	for(int i = 1; i <= n; i++){// 试图在第 k 列的第 i 行放棋子 
		if(f[i] == 0){			// 如果该位置没有棋子，就准备放棋子 
			bool flag = true;	// 判断该位置可不可以放棋子的标志 
			for(int pre = 1; pre < k; pre++){		// 判断与之前放过棋子是否冲突 
				if(k - pre == abs(f[pre] - i)){     // k 列 i 行 和 pre 列 f[pre] 行 
					flag == false;
					break;
				}
			}
			if(flag){
				P[k] = i;
				f[i] = 1;
				res(k + 1);
				f[i] = 0; 
			}
		}
	}
} 

int main(){
	n = 8;
	resp(1);
	cout << count << endl;
	return 0;
} 
