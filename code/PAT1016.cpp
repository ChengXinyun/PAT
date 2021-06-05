#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;


const int maxn = 1e5 + 5;

struct Node{
	char name[21];
	int M, d, H, m;
	bool f;
}re[maxn];

bool cmp(Node a, Node b){
	if(strcmp(a.name, b.name) != 0)	return strcmp(a.name, b.name) < 0;
	else{
		if(a.M != b.M)	return a.M < b.M;
		else{
			if(a.d != b.d)	return a.d < b.d;
			else{
				if(a.H != b.H)	return a.H < b.H;
				else{
					if(a.m != b.m)	return a.m < b.m;
				}
			}
		}
	} 
}

int main(){
	int fee[24];
	
	for(int i = 0; i < 24; i++)
		cin >> fee[i];
	int n;
	string str;
	cin >> n;
	
	for(int i = 0; i < n; i++){
		scanf("%s %d:%d:%d:%d ", re[i].name, &re[i].M, &re[i].d, &re[i].H, &re[i].m);
		cin >> str;
		if(str == "on-line")	re[i].f = true;
		else	re[i].f = false;
	}
	
	sort(re, re + n, cmp);
	//for(int i = 0; i < n; i++){
	//	printf("%s %02d:%02d:%02d:%02d ", re[i].name, re[i].M, re[i].d, re[i].H, re[i].m);	
	//	cout << re[i].f << endl;
	//}
	int i = 0;
	string s = "";
	string s1 = "";
	double mm = 0;
	int sum = 0;
	int money = 0;
	while(i < n){
		string str1 = re[i].name;
		string str2 = re[i + 1].name;
		if(str1 != str2 || !(re[i].f && !re[i + 1].f)){
			i++;
			continue;
		} else {
			money = 0;
			if(s != re[i].name){
				printf("%s %02d\n", re[i].name, re[i].M);
				s = re[i].name;	
			}
			//cout << "yes" << endl;
			printf("%02d:%02d:%02d %02d:%02d:%02d", re[i].d, re[i].H, re[i].m, re[i + 1].d, re[i + 1].H, re[i + 1].m);
			int minute = 24*60*(re[i+1].d - re[i].d) + 60*(re[i+1].H-re[i].H) + (re[i+1].m - re[i].m);
			printf(" %d ", minute);
			
			if(re[i].d != re[i+1].d){
				int sum = 0;
				for(int i = 0; i < 24; i++){
					sum += 60*fee[i];
				}
				money += (re[i+1].d - re[i].d) * sum;	
			}
			if(re[i].H == re[i+1].H){
				money += fee[re[i].H] * (re[i+1].m - re[i].m);
			} else {
				money += fee[re[i].H] * (60 - re[i].m) + fee[re[i+1].H] * re[i+1].m;
				for(int k = re[i].H + 1; k < re[i+1].H; k++){
					money += fee[k] * 60;
				}
			}
			double mo = money / 100.0;
			printf("$%.2f\n", mo); 
			mm += mo;
			//cout << re[i].name << " " << re[i+2].name<< endl;
			if(i < n - 2 && strcmp(re[i].name, re[i+2].name) != 0){
				printf("Total amount: $%.2f\n", mm);
				mm = 0;
			}
			i = i + 2;
		}
		
	}
	printf("Total amount: $%.2f", mm);
	return 0;
}
