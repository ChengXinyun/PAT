#include <iostream>
#include <stack>

using namespace std;

int main(){
	int num, base;
	scanf("%d %d", &num, &base);
	
	stack<int> ans;
	stack<int> acc, s;
	
	do{
		ans.push(num % base);
		acc.push(num % base);
		num /= base;
	} while(num != 0);
	
	while(!ans.empty()){
		s.push(ans.top());
		ans.pop(); 
	}
	bool f = true;
	while(!s.empty() || !acc.empty()){
		if(s.top() != acc.top()){
			f = false;
		}
		ans.push(s.top());
		s.pop();
		acc.pop(); 
	}
	if(f)	cout << "Yes" << endl;
	else	cout << "No" << endl;
	
	while(!ans.empty()){
		if(ans.size() == 1)	cout << ans.top();
		else	cout << ans.top() << " ";
		ans.pop();
	}

	return 0;
}
