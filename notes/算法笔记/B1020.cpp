#include <iostream>
#include <algorithm>

using namespace std;

struct mooncake{
	double restore;
	double sell;
	double price;
}cake[1010];

bool cmp(mooncake a, mooncake b){
	return a.price > b.price;
}

int main(){
	int n, m;
	scanf("%d %d", &n, &m);
	
	for(int i = 0; i < n; i++){
		scanf("%lf", &cake[i].restore);
	}
	for(int i = 0; i < n; i++){
		scanf("%lf", &cake[i].sell);
		cake[i].price = cake[i].sell / cake[i].restore;
	}
	
	sort(cake, cake + n, cmp);
	
	double sum = 0;
	for(int i = 0; i < n; i++){
		if(cake[i].restore < m){
			m -= cake[i].restore;
			sum += cake[i].sell;
		} else {
			sum += m * cake[i].price;
			break;
		}
	}	
	
	cout << sum <<endl;
	return 0;
}
