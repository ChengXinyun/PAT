#include <iostream>
#include <cstring>
#include <algorithm>

using namespace std;

const int maxn = 1e5 + 5;

struct Node{
	char name[10];
	int age;
	int m;
}list[maxn];

bool cmp(Node a, Node b){
	if(a.m != b.m)	return a.m > b.m;
	else if(a.age != b.age)	return a.age < b.age;
	else	return (strcmp(a.name, b.name) < 0);
}

int main(){
	int n, k;
	cin >> n >> k;
	
	for(int i = 0; i < n; i++){
		cin >> list[i].name >> list[i].age >> list[i].m;
	}
	
	sort(list, list + n, cmp);
	
	//for(int i = 0; i < n; i++){
	//	printf("%s %d %d\n", list[i].name, list[i].age, list[i].m);
	//}
	
	int c, min, max;
	for(int i = 0; i < k; i++){
		cin >> c >> min >> max;
		int t = 0;
		cout << "Case #"<< i + 1<<":\n";
		for(int j = 0; j < n; j++){
			if(list[j].age >= min && list[j].age <= max){
				printf("%s %d %d\n", list[j].name, list[j].age, list[j].m);
				t++; 
			}
			if(t == c)	break;
		}
		
		if(t == 0){
			printf("None\n");
		}
	}
	
	//char str1[10] = "Bob_Volk";
	//char str2[10] = "Dobby";
	//cout << strcmp(str1, str2);//-1,我是**，cmp里面的strcmp忘记写return了。 
	
	return 0;
}
