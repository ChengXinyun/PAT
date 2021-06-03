#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;

struct Student{
	int id;
	char name[9];
	int score;
}stu[100001];

int c;
bool cmp(Student a, Student b){
	if(c == 1){
		return a.id < b.id;
	} else if(c == 2){
		if(strcmp(a.name, b.name) != 0)	return strcmp(a.name, b.name) < 0;
		else	return a.id < b.id;
	} else {
		if(a.score != b.score)	return a.score < b.score;
		else	return a.id < b.id;
	}
}


int main(){
	int n;
	scanf("%d %d", &n, &c);
	
	for(int i = 0; i < n; i++)
		scanf("%d %s %d", &stu[i].id, stu[i].name, &stu[i].score);
	
	sort(stu, stu + n, cmp);
	
	for(int i = 0; i < n; i++)
		printf("%06d %s %d\n", stu[i].id, stu[i].name, stu[i].score);
	
	return 0;
}
