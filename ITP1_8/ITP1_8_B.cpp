#include<iostream>
using namespace std;

int main(){
    string str;
    while(1){
        int sum=0;
        cin >> str;
        if(str=="0") break;
        for(int i=0;str.length()>i;i++) sum+=str[i]-'0';
        cout << sum << endl;
    }
}