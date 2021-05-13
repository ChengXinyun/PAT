#include <iostream>
#include <vector>
using namespace std;

//��ʱ�Ļ�����һЩ���ļ��㷽����
//vector��ʹ�ã�Ĭ�ϳ�ʼ������Ϊ0�� 
//swap()����
//min()���� 

int main(){
	int n;
	cin >> n;
	
	vector<int> dis(n+1);
	int tot = 0, cnt, a, b;
	for(int i = 1; i <= n; i++){
		int temp;
		cin >> temp;
		tot += temp;
		dis[i] = tot;
	}
	
	cin >> cnt;
	while(cnt--){
		cin >> a >> b;
		if(a > b){
			swap(a,b);
		}
		int d = dis[b-1] - dis[a-1];
		d = min(d, tot-d);
		cout << d << endl;
	}
	return 0;
}
