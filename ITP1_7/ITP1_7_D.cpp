#include<iostream>
using namespace std;
 
int main(){
    long long n,m,l,a[100][100],b[100][100],c[100][100]={0};
    cin >> n >> m >> l;
    for(int i=0;n>i;i++)
        for(int j=0;m>j;j++) cin >> a[i][j];
    for(int i=0;m>i;i++)
        for(int j=0;l>j;j++) cin >> b[i][j];
    for(int i=0;n>i;i++)
        for(int j=0;l>j;j++)
            for(int k=0;m>k;k++)
                c[i][j]+=a[i][k]*b[k][j];
    for(int i=0;n>i;i++){
        for(int j=0;l>j;j++){
            cout << c[i][j];
            if((l-1)!=j) cout << " ";
        }
        cout << endl;
    }
}