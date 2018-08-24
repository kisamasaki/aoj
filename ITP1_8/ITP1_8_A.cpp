#include <iostream>
using namespace std;

int main () {
	string str;
	int n[26]={0};
	while (getline(cin,str)) {
		for (int i=0; i<str.length(); i++) {
			if (str[i]>='A'&&'Z'>=str[i]) n[str[i]-'A']++;
			else if (str[i]>='a'&&'z'>=str[i]) n[str[i]-'a']++;
		}
	}
	for (int i=0; i<26; i++) cout << ((char)('a'+i)) << " : " << n[i] << endl;
}