// n�ʺ����⣬������������ 
#include <iostream>

using namespace std;

// �����ݹ飬�о���ÿһ��������ȷź�ȫ��λ�ã����ж� 
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

// ���ݣ��ڷŵĹ�����ȥ�ж��Ƿ���ԣ����������֮��Ͳ���Ҫ�ٷţ�����case; 
void resp(int k){
	if(k > n){// ����������ˣ��ǿ϶��Ǻ������� 
		count++;
		return;
	}
	for(int i = 1; i <= n; i++){// ��ͼ�ڵ� k �еĵ� i �з����� 
		if(f[i] == 0){			// �����λ��û�����ӣ���׼�������� 
			bool flag = true;	// �жϸ�λ�ÿɲ����Է����ӵı�־ 
			for(int pre = 1; pre < k; pre++){		// �ж���֮ǰ�Ź������Ƿ��ͻ 
				if(k - pre == abs(f[pre] - i)){     // k �� i �� �� pre �� f[pre] �� 
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
