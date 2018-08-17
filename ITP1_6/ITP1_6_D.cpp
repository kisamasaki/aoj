#include<iostream>
using namespace std;

int main(){
    int n,m,a[100][100],b[100],c[100]={0};
    cin >> n >> m;
    for(int i=0;n>i;i++)
        for(int j=0;m>j;j++) cin >> a[i][j];

    for(int j=0;m>j;j++) cin >> b[j];

    for(int i=0;n>i;i++)
        for(int j=0;m>j;j++) c[i]+=a[i][j]*b[j];

    for(int j=0;n>j;j++) cout << c[j] << endl;
}