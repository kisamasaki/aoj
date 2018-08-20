#include<iostream>
using namespace std;

int main(){
    int r,c,s[101][101]={0};
    cin >> r >> c;
    for(int i=0;r>i;i++){
        for(int j=0;c>j;j++){
            cin >> s[i][j];
            s[r][j]+=s[i][j];
            s[i][c]+=s[i][j];
        }
        s[r][c]+=s[i][c];
    }
    for(int i=0;r+1>i;i++){
        for(int j=0;c+1>j;j++){
            cout << s[i][j];
            if(j!=c) cout << " ";
        }
        cout << endl;
    }
}