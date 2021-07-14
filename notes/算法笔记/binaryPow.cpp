#include <iostream>

using namespace std;

typedef long long LL;

LL binaryPow(LL a, LL b, LL m){
	if(b == 0)	return 1;// 如果 b 等于 0，则 a ^ 0 = 1;
	
	// 如果 b 为奇数，转换成 b - 1;
	//if(b % 2)
	//if(b & 1)
	if(b % 2 == 1)	return a * binaryPow(a, b - 1, m) % m;
	
	else{
		LL mul = binaryPow(a, b / 2, m);
		return mul * mul % m;
	} 
	
}

LL binaryPow_1(LL a, LL b, LL m){
	LL ans = 1;
	while(b > 0){
		if(b & 1){
			ans = ans * a % m;
		}
		a = a * a % m;
		b >>= 1;  // b /= 2;
	}
	return ans;
}

int main(){
	cout << binaryPow(3, 11, 100001) << endl;
	cout << binaryPow_1(3, 11, 100001) << endl;
	return 0;
}

