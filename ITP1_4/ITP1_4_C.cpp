#include<iostream>
using namespace std;

int main(){
    int a,b;
    char op;
    while(cin >> a >> op >> b,op != '?'){
        if(op=='+'){
            cout << a+b << endl;
        }
        if(op=='-'){
            cout << a-b << endl;
        }
        if(op=='*'){
            cout << a*b << endl;
        }
        if(op=='/'){
            cout << a/b << endl;
        }
    }
    return 0;
}
