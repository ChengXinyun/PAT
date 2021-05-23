#include <iostream>
#include <climits>

using namespace std;

int main(){
	int n;
	scanf("%d", &n);
	
	int h = INT_MIN, l = INT_MAX;
	string fname = "", fid = "";
	string mname = "", mid = "";
	
	while(n--){
		string name, id, gender;
		int grade;
		cin >> name >> gender >> id >> grade;
		if(gender == "F"){
			if(grade > h){
				h = grade;
				fname = name;
				fid = id;
			}
		} else {
			if(grade < l){
				l = grade;
				mname = name;
				mid = id;
			}
		}
	}
	if(fname != ""){
		cout << fname << " " << fid << endl;
	} else {
		cout << "Absent" << endl;
	}
	if(mname != ""){
		cout << mname << " " << mid << endl;
	} else {
		cout << "Absent" << endl;
	}
	if(fname != "" && mname != ""){
		cout << h - l;
	} else {
		cout << "NA" << endl;
	}
	
	return 0;
}
