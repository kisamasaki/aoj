#include<iostream>
using namespace std;

int main(){
    int n,x,num=0;
    while (cin >> n >> x, n!=0||x!=0){
        for(int i=1;n>=i;i++){
            for(int j=i+1;n>=j;j++){
                for(int k=j+1;n>=k;k++){
                    if(i+j+k==x) num++;
                }
            }
        }
        cout << num << endl;
        num=0;
    }
}