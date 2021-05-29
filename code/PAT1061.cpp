#include <iostream>

using namespace std;

int main(){
	string day[7] = {"MON", "TUE", "WED", "THU", "FRI", "SAT", "SUN"};
	string f, s, m, k;
	cin >> f >> s >> m >> k;
	string str = "";
	int i = 0, j = 0;
	while(i < f.length() && i < s.length()){
		if(f[i] == s[i] && (f[i] >= 'A' && f[i] <= 'G')){
			str += day[f[i] - 'A'];
			break;
		}
		i++;
	}
	i = i + 1;	
    str += " ";
	while(i < f.length() && i < s.length()){
		if(f[i] == s[i] && ((f[i] >= 'A' && f[i] <= 'N') || isdigit(f[i]))){
            if(isdigit(f[i])){
                str += "0";
                str += to_string(f[i] - '0');
            } else {
                str += to_string(f[i] - 'A' + 10);
            }
			break;
		}
		i++;
	} 
	int pos;
	while(j < m.length() && j < k.length()){
		if(m[j] == k[j] && isalpha(m[j])){
			pos = j;
			break;
		}
		j++;
	}
    str += ":";
    cout << str;
	printf("%02d", pos);
	return 0;
}
