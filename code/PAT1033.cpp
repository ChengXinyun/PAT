// ��дһЩ�ϸ��ӵ���Ŀ��ʱ�� �Ȱ�˼·д������ ��ȥд���룬 ����һ�£�Ӧ�û�úܶࡣ
// ����˼·��˼ά��ѵ�� 
#include <iostream>
#include <algorithm>

using namespace std;

struct station{
	double price;
	int distance;
}gas[501];

bool cmp(station a, station b){
	return a.distance < b.distance;
}
// ����·��Զ����С�������򣬱����ܴﵽ����Զ·��֮�ڵļ���վ
//		1. ����м���վ���ͼ۱ȴ�ʱ�ĵͣ����͵��˼���վ�� 
//		2. ���û���ҵ��ȴ�ʱ�ͼ۵͵ģ������ͣ� 
int main(){
	int c, dis, v, n;
	scanf("%d %d %d %d", &c, &dis, &v, &n);
	
	for(int i = 0; i < n; i++){
		scanf("%lf %d", &gas[i].price, &gas[i].distance);
	}
	sort(gas, gas + n, cmp);
	for(int i = 0; i < n; i++){
		printf("%lf %d\n", gas[i].price, gas[i].distance);
	}
	sort(gas, gas + n, cmp);
	
	if(gas[0].distance != 0){
		cout << "The max distance is 0";
		return 0;
	}	
	
	int now_location = 0; // Ŀǰ�ڵ�λ��
	int max_location = c * v; // Ŀǰ��Զ�ܴﵽ�ľ���
	int fee = 0; // ���ͷ���
	int now_price = gas[0].price; // ��ǰ���͵ĵ��� 
	
	
	
	return 0;
}
