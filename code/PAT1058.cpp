#include <iostream>

using namespace std;

int main(){
	long long a, b, c, d, e, f;
	scanf("%lld.%lld.%lld %lld.%lld.%lld", &a, &b, &c, &d, &e, &f);
	cout << ( a + d + (b + e + (f + c) / 29) / 17)<< "." << (b + e + (f + c) / 29) % 17 << "." << (f + c) % 29;
	return 0;
}
