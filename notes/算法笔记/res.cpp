// ȫ����(�ݹ�ʵ��) 
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
	for(int i = 1; i <= n; i++){// ��ͼ����һ��N������������ 
		if(f[i] == 0){			// ���֮ǰû���ֹ��������� 
			f[i] = 1;			// ����󣬸ı� f ��־ 
			P[k] = i;			// �������� k λ�� 
			res(k + 1);			// �����ݹ飬����һ���� 
			f[i] = 0;			// �ݹ�������ָ�״̬ 
		}
	}
	
}

int main(){
	n = 4;
	res(1);
	return 0;
}
