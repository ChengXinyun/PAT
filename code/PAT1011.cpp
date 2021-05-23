#include <iostream>
#include <cmath>
using namespace std;

int main(){
	float mul = 1;
	string s = "";
	for(int i = 0; i < 3; i++){
		float w, t, l, m;
		scanf("%f%f%f", &w, &t, &l);
		m = max(w, max(t, l));
		mul *= m;
		if(m == w)	s += "W ";
		else if(m == t)	s += "T ";
		else	s += "L ";
	}
	cout << s;
	mul = (mul * 0.65 - 1) * 2;
	printf("%.2f", mul);
	return 0;
}
