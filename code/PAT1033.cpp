// 在写一些较复杂的题目的时候， 先把思路写出来， 再去写代码， 尝试一下，应该会好很多。
// 整理思路，思维的训练 
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
// 按照路程远近从小到大排序，遍历能达到的最远路程之内的加油站
//		1. 如果有加油站的油价比此时的低，加油到此加油站； 
//		2. 如果没有找到比此时油价低的，加满油； 
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
	
	int now_location = 0; // 目前在的位置
	int max_location = c * v; // 目前最远能达到的距离
	int fee = 0; // 加油费用
	int now_price = gas[0].price; // 当前加油的单价 
	
	
	
	return 0;
}
