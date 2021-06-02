#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;

struct Student{
	char id[15];
	int grade;
	int ln;
	int lr;
}stu[30001];

bool cmp(Student a, Student b){
	if(a.grade != b.grade)	return a.grade > b.grade;
	else{
		return strcmp(a.id, b.id) < 0;
	}
}

int main(){
	int n;
	scanf("%d", &n);
	
	int m, j = 0;
	for(int i = 0; i < n; i++){
		scanf("%d", &m);
		for(int k = 0; k < m; k++){
			cin >> stu[j].id >> stu[j].grade;
			stu[j].ln = i + 1;
			j++;
		}
		sort(stu + j - m, stu + j, cmp);
		stu[j - m].lr = 1;
		for(int k = j - m + 1; k < j; k++){
			if(stu[k].grade == stu[k - 1].grade){
				stu[k].lr = stu[k - 1].lr;
			} else {
				stu[k].lr = k + 1 - (j - m);
			}
		}
	}
	cout << j << endl;
	sort(stu, stu + j, cmp);
	int r = 1;
	for(int i = 0; i < j; i++){
		if(i > 0 && stu[i].grade != stu[i - 1].grade){
			r = i + 1;
		}
		cout << stu[i].id << " " << r << " " << stu[i].ln << " " << stu[i].lr << endl; 
	}	
	return 0;
}
